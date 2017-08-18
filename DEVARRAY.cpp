//Practice
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,q,a[100005],num;
	scanf("%lld",&n);
	scanf("%lld",&q);
	for(register long long int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for(register long long int i=0;i<q;i++)
	{
		scanf("%lld",&num);
		if(num>=a[0] && num<=a[n-1])
			printf("Yes\n");
		else
			printf("No\n");
	}
}