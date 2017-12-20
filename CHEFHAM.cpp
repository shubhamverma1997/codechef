#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	long long int t,n,a[100005],b[100005];
	ll temp,h,c[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(register ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
		}
		temp=a[0];
		for(register ll i=1;i<n;i++)
		{
			h=b[i];
			b[i]=temp;
			c[i]=temp;
			temp=h;
		}
		b[0]=temp;
		c[0]=temp;
		
		temp=b[0];
		for(register ll i=1;i<n;i++)
		{
			h=c[i];
			c[i]=temp;
			temp=h;
		}
		c[0]=temp;
		/*
		for(ll i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<"\n";

		for(ll i=0;i<n;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<"\n";
	*/
		for(register ll i=0;i<n;i++)
		{
			if(a[i]==b[i])
			{
				for(register ll j=i+1;j!=i;j++)
				{
					j=j%n;
					if(j==i)
						break;
					//cout<<j<<" ";
					if(b[i]!=a[j] && b[j]!=a[i])
					{
						int temp=b[i];
						b[i]=b[j];
						b[j]=temp;
						break;
					}
				}
			}				
		}
		for(register ll i=0;i<n;i++)
		{
			if(a[i]==c[i])
			{
				for(register ll j=i+1;j!=i;j++)
				{
					j=j%n;
					if(j==i)
						break;
					//cout<<j<<" ";
					if(c[i]!=a[j] && c[j]!=a[i])
					{
						int temp=c[i];
						c[i]=c[j];
						c[j]=temp;
						break;
					}
				}
			}				
		}

		ll sc1=0,sc2=0;
		for(register ll i=0;i<n;i++)
		{
			if(a[i]!=b[i])
				sc1++;
			if(a[i]!=c[i])
				sc2++;
		}
		if(sc1>sc2)
		{

			printf("%lld\n",sc1);
			for(register ll i=0;i<n;i++)
				printf("%lld ",b[i]);
		}
		else
		{
			printf("%lld\n",sc2);
			for(register ll i=0;i<n;i++)
				printf("%lld ",c[i]);
		}
		printf("\n");
	}
}