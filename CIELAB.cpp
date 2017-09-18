#include<iostream>
using namespace std;
int main()
{
	long long int a,b;
	scanf("%lld",&a);
	scanf("%lld",&b);
	a=a-b;
	b=a%10;
	b++;
	b=b%10;
	if(b==0)
		b++;
	a=a/10;
	a=a*10+b;
	printf("%lld",a);
}