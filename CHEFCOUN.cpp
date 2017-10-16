#include<iostream>
using namespace std;
int main()
{
	//freopen("output.txt","w",stdout);
	long long int t,n,num,div;
	scanf("%lld",&t);
	while(t--)
	{
		num=4294967296;
		scanf("%lld",&n);
		div=4294967296/n;
		for(register long long int i=1;i<=n;i++ )
		{
			if(i==2)
				printf("%lld ",i);
			else if(i==3)
			{
				printf("%lld ",div+20000);
				num=num-40000;
			}
			else if(i==n)
				printf("%lld ",num-div*(n-1));
			else
				printf("%lld ",div);
		}
		printf("\n");
	}
}