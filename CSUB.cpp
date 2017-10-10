#include<iostream>
using namespace std;
int main()
{
	long long int t,cnt,n;
	char c;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		getchar();
		cnt=0;
		for(register long long int i=0;i<n;i++)
		{
			c=getchar();
			if(c=='1')
				cnt++;
		}
		cnt=(cnt*(cnt+1))/2;
		printf("%lld\n",cnt);
	}
}