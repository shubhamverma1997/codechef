#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int t,n,m,a,b;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&n);
		scanf("%lld",&m);
		while(m)
		{
			scanf("%lld",&a);
			scanf("%lld",&b);
			m--;
		}
		if(n%2==0)
			printf("yes\n");
		else
			printf("no\n");
		t--;
	}
}
