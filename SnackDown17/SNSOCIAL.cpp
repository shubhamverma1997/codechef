#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#include<stack>
using namespace std;
long long int arr[501][501];
bool check(long long int n,long long int m)
{
	for(register long long int i=0;i<n;i++)
	{
		for(register long long int j=0;j<m;j++)	
		{
			if(arr[i][j]!=arr[0][0])
				return false;
		}
	}
	return true;
}

void print(long long int n,long long int m)
{
	for(register long long int i=0;i<n;i++)
	{
		for(register long long int j=0;j<m;j++)	
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
}

int main()
{
	long long int t,n,m,maxelement;
	long long int tempi,tempj;

	cin>>t;
	while(t)
	{
		stack<long long int> vi,vj;
		long long int si=-1,sl=0;
		maxelement=-1;

		scanf("%lld",&n);
		scanf("%lld",&m);
		for(register long long int i=0;i<n;i++)
		{
			for(register long long int j=0;j<m;j++)
			{
				scanf("%lld",&arr[i][j]);
				
				if(maxelement==arr[i][j])
				{
					vi.push(i);
					vj.push(j);
					si++;
				}

				if(maxelement<arr[i][j])
				{
					si=0;
					vi.push(i);
					vj.push(j);
					maxelement=arr[i][j];
				}

			}
		}

		long long int hours=0;
		queue< pair< long long int, long long int> > final;
		pair< long long int , long long int > p;

		long long int socq;//sizeofcurrentqueue
		
		/*
		cout<<endl<<endl;
		while(si>=0)
		{
			si--;
			cout<<arr[vi.top()][vj.top()]<<" ";
			vi.pop();
			vj.pop();
		}
		cout<<endl<<endl;*/

		while(si>=0)
		{
			final.push(make_pair(vi.top(),vj.top()));
			vi.pop();
			vj.pop();
			si--;
		}


		while(!check(n,m))
		{

			/*
			cout<<endl;
			print(n,m);
			cout<<endl;
			*/
			socq=final.size();
			hours++;
			for(register long long int i=socq;i>0;i--)
			{
				p=final.front();
				tempi=p.first;
				tempj=p.second;
				if(arr[tempi-1][tempj]!=maxelement && tempi!=0)
				{
					arr[tempi-1][tempj]=maxelement;
					final.push(make_pair(tempi-1,tempj));
				}
				if(arr[tempi-1][tempj+1]!=maxelement && tempi!=0 && tempj!=m-1)
				{
					arr[tempi-1][tempj+1]=maxelement;
					final.push(make_pair(tempi-1,tempj+1));
				}
				if(arr[tempi][tempj+1]!=maxelement && tempj!=m-1)
				{
					arr[tempi][tempj+1]=maxelement;
					final.push(make_pair(tempi,tempj+1));
				}
				if(arr[tempi+1][tempj+1]!=maxelement && tempi!=n-1 && tempj!=m-1)
				{
					arr[tempi+1][tempj+1]=maxelement;
					final.push(make_pair(tempi+1,tempj+1));
				}
				if(arr[tempi+1][tempj]!=maxelement && tempi!=n-1)
				{
					arr[tempi+1][tempj]=maxelement;
					final.push(make_pair(tempi+1,tempj));
				}
				if(arr[tempi+1][tempj-1]!=maxelement && tempi!=n-1 && tempj!=0)
				{
					arr[tempi+1][tempj-1]=maxelement;
					final.push(make_pair(tempi+1,tempj-1));
				}
				if(arr[tempi][tempj-1]!=maxelement && tempj!=0)
				{
					arr[tempi][tempj-1]=maxelement;
					final.push(make_pair(tempi,tempj-1));
				}
				if(arr[tempi-1][tempj-1]!=maxelement && tempi!=0 && tempj!=0)
				{
					arr[tempi-1][tempj-1]=maxelement;
					final.push(make_pair(tempi-1,tempj-1));
				}
				final.pop();
			}
		}
		
		/*
		cout<<endl;
		print(n,m);
		cout<<endl;
		*/
		printf("%lld\n",hours);
		t--;
	}
}
