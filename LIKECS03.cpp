#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,k,a,cnt;
	scanf("%lld",&t);
	while(t--)
	{
		int kv[25]={0};
		cnt=0;
		scanf("%lld",&n);
		scanf("%lld",&k);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a!=0 && log2(a)==(int)(log2(a)))
			{
				kv[(int)(log2(a))]=1;
			}
		}
		for(int i=0;i<k;i++)
		{
			if(kv[i]!=1)
			{
				cnt++;
			}
		}
		printf("%lld\n",cnt);
	}
}