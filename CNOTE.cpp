#include<iostream>
using namespace std;
int main()
{
	long long int t,x,y,k,n,a,b,diff,flag;
	scanf("%lld",&t);
	while(t--)
	{
		flag=0;
		scanf("%lld",&x);
		scanf("%lld",&y);
		scanf("%lld",&k);
		scanf("%lld",&n);
		diff=x-y;
		while(n--)
		{
			scanf("%lld",&a);
			scanf("%lld",&b);
			if(a>=diff && b<=k)
			{
				flag=1;
			}
		}
		if(flag==1)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
	}
}