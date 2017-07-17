#include<iostream>
#include<stdio.h>
#include<queue>
#include<utility>
#include<algorithm>
#define ll long long int
using namespace std;

class comparePairs
{
	public:
		bool operator()(const pair<ll,ll>& a, const pair<ll,ll>& b)
		{
			return a.first>b.first;
		}
};

class triplet
{
	public:
	long long int days;
	long long int lectures;
	long long int sadness;
	
	triplet()
	{
		days=0;
		lectures=0;
		sadness=0;	
	}

	triplet(long long int a,long long int b,long long int c)
	{
		days=a;
		lectures=b;
		sadness=c;
	}
};

class tripletComparator
{
	public:
	bool operator()(const triplet& a, const triplet& b)
	{
		return a.days<b.days; 
	}	
};

int main()
{
	long long int t,n,d,totalSadness,curedSadness;
	triplet a[100004];
	
	pair<ll,ll> temp;
	
	scanf("%lld",&t);
	while(t)
	{
		priority_queue< pair<ll,ll> , vector< pair<ll,ll> > > pq;
		totalSadness=0;
		curedSadness=0;

		scanf("%lld",&n);
		scanf("%lld",&d);

		for(register int i=0;i<n;i++)
		{
			scanf("%lld",&a[i].days);
			scanf("%lld",&a[i].lectures);
			scanf("%lld",&a[i].sadness);
			totalSadness+=a[i].sadness*a[i].lectures;
		}

		sort(a,a+n,tripletComparator());

		/*
		for(register int i=0;i<n;i++)
		{
			cout<<a[i].days;
		}
		cout<<endl;*/
		long long int skiptime=0;
		for(register int i=0,j=1;i<n || j<=d;j++)
		{
			//cout<<j<<":"<<endl;
			while(a[i].days<=j && i<n)
			{
				//cout<<"<--"<<a[i].days<<" "<<a[i].lectures<<" "<<a[i].sadness<<endl;
				pq.push(make_pair(a[i].sadness,a[i].lectures));
				i++;
			}
			skiptime=1;
			if(i<n)
			{
				skiptime=a[i].days-j;
				j=a[i].days-1;//-1 for j++
				//cout<<j<<"|"<<endl;
			}
			while(skiptime>0)
			{
				skiptime--;
			if(!pq.empty())
			{
				//cout<<"-->"<<pq.top().first<<" "<<pq.top().second<<endl;
				if(pq.top().second>1)
				{
					temp=pq.top();
					pq.pop();
					temp=make_pair(temp.first,temp.second-1);
					curedSadness+=temp.first;
					pq.push(temp);
				}
				else
				{
					curedSadness+=pq.top().first;
					pq.pop();
				}
				
			}
			else
				break;
			}
		}
		//cout<<totalSadness<<" "<<curedSadness<<endl;
		cout<<totalSadness-curedSadness<<endl;;

		t--;
	}
}
