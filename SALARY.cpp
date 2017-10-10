#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a[105],mi,ma,cnt,in;
	scanf("%lld",&t);
	while(t--)
	{
		cnt=0;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(register long long int i=0;i<n;i++)
		{
			mi=100000000;
			ma=-1;
			in=0;
			for(register long long int j=0;j<n;j++)
			{
				if(mi>a[j])
					mi=a[j];
				if(ma<a[j])
				{
					ma=a[j];
					in=j;
				}
			}
			if(ma-mi==0)
				break;
			for(register long long int j=0;j<n;j++)
			{
				if(j==in)
					continue;
				a[j]=a[j]+(ma-mi);
			}
			cnt=cnt+(ma-mi);	
		}
		printf("%lld\n",cnt);
	}
}