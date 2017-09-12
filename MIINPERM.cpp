#include <iostream>
using namespace std;
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n%2==0)
		for(register long long int i=1;i<=n-2;i+=2)
		{
			printf("%lld %lld ",i+1,i);
		}
		else
		{
			for(register long long int i=1;i<=n;i+=2)
			{
				if(i==n-2)
				{
					printf("%lld ",i+1);
					break;
				}
				printf("%lld %lld ",i+1,i );
				
			}
			printf("%lld %lld",n,n-2);
		}
		printf("\n");

	}
}