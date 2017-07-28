#include<iostream>
using namespace std;
int main()
{
	long long int t,u,v,x;
	long double ans;
	scanf("%lld",&t);
	while(t)
	{
		cout.precision(11);
		scanf("%lld",&u);
		scanf("%lld",&v);
		scanf("%lld",&x);
		cout<<(long double)(x)/(long double)(u+v)<<"\n";
		t--;
	}
}