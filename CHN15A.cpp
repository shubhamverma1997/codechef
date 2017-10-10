#include<iostream>
using namespace std;
int main()
{
	long long int t,n,k,a,cnt;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&k);
		cnt=0;
		while(n--)
		{
			scanf("%lld",&a);
			if((a+k)%7==0)
				cnt++;
		}
		printf("%lld\n",cnt);
	}
}