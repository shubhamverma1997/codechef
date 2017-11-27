#include<iostream>
#define ll register long long int
using namespace std;
char s[100005];
char c[4];
int main()
{
	long long int t,n,p,flag,temp;
	scanf("%lld",&t);
	c[0]='a';
	c[1]='b';
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&p);
		if(p<3)
		{
			printf("impossible\n");
			continue;
		}
		flag=0;
		if(p%2==1)
		{
			temp=p/2;
		}
		else
		{
			temp=p/2-1;
		}
		for(ll i=0;i<=temp;i++)
		{
			s[i]=c[flag];
			s[p-1-i]=c[flag];
			flag=1-flag;
		}
		s[p]='\0';
		for(ll i=0;i<n/p;i++)
		{
			cout<<s;
		}
		printf("\n");
	}
}