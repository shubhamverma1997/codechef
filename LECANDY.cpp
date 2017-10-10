#include<iostream>
using namespace std;
int main()
{
	long long int t,n,c,a,sum;
	scanf("%lld",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&n);
		scanf("%lld",&c);
		while(n--)
		{
			scanf("%lld",&a);
			sum=sum+a;
		}
		if(sum<=c)
			printf("Yes\n");
		else
			printf("No\n");
	}
}