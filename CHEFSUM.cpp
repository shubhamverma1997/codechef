#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,mini,mi;
	scanf("%lld",&t);
	while(t--)
	{
		mini=1000000;

		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a<mini)
			{
				mini=a;
				mi=i;
			}
		}
		printf("%lld\n",mi+1);
	}
}