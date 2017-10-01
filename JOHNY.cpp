#include<iostream>
using namespace std;
int main()
{
	long long int t,n,x,a[105],temp,cnt;
	scanf("%lld",&t);
	while(t--)
	{
		cnt=1;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		scanf("%lld",&x);
		temp=a[x-1];
		for(register long long int i=0;i<n;i++)
		{
			if(temp>a[i])
				cnt++;
		}
		printf("%lld\n",cnt);
	}
}