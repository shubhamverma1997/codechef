#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	long long int t,n,m,a,inc,flag;
	scanf("%lld",&t);
	while(t--)
	{
		unordered_map<long long int,long long int> um;
		scanf("%lld",&n);
		scanf("%lld",&m);
		for(register long long int i=0;i<m;i++)
		{
			scanf("%lld",&a);
			um[a]=1;
		}
		inc=1;
		flag=0;
		for(register long long int i=1;i<=n;i++)
		{
			if(um[i]!=1 && flag==1)
			{
				flag=0;
				continue;
			}
			if(um[i]!=1 && flag==0)
			{
				flag=1;
				printf("%lld ",i);
				um[i]=1;
				inc=2;
			}
		}
		printf("\n");
		for(register long long int i=1;i<=n;i++)
		{
			if(um[i]!=1)
			{
				printf("%lld ",i);
			}
		}
		printf("\n");
	}
}