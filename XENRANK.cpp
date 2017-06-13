#include<iostream>
using namespace std;
int main()
{
	long long int t,u,v,ans;
	double a,max;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&u);
		scanf("%lld",&v	);
		a=(u+v+1)*(u+v+2)/2-v;
		ans=(long long int)(a);
		printf("%lld\n",ans);
		t--;
	}
}
