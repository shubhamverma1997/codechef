#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,num,a,sum=0;
	long long int n[100001],p[100001],ni,pi;
	
	scanf("%lld",&t);
	
	while(t)
	{
	
		ni=0;
		pi=0;
		sum=0;

		scanf("%lld",&num);
		for(register long long int i=0;i<num;i++)
		{
			scanf("%lld",&a);	
			if(a<=0)
			{
				n[ni]=a;
				ni++;
			}
			else
			{
				p[pi]=a;
				pi++;
			}
		}
		
		/*
		for (long long int i = 0; i < num; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<pi<<" "<<ni<<endl;*/

		sort(n,n+ni);
		reverse(n,n+ni);//decreasing order
		sort(p,p+pi);

		long long int tempsum=0,tcount=0,istate=0;

		while(pi>0)
		{
			pi--;
			tempsum+=p[pi];
			tcount++;
		}

		long long int i=0;
		for(i=0;i<ni;)
		{
			if((tempsum+n[i])*(tcount+1)>=tempsum*tcount+n[i])
			{
				//cout<<n[i]<<" ";
				tempsum+=n[i];
				tcount++;
				i++;
			}
			else
			{
				break;
			}
		}
		//cout<<endl;

		sum+=tempsum*tcount;

		while(i<ni)
		{
			sum=sum+n[i];
			i++;
		}

		printf("%lld\n",sum);
		t--;
	}
}
