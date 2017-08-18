//Practice
#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a,ans;
	scanf("%lld",&t);
	while(t)
	{
		ans=0;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			ans=ans|a;
		}
		printf("%lld\n",ans);
		t--;
	}
}