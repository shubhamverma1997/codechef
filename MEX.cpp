#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
{
	long long int t,n,k,ans,a,flag,mx;
	scanf("%lld",&t);
	while(t--)
	{
		unordered_map<long long int , long long int > um;
		flag=0;
		scanf("%lld",&n);
		scanf("%lld",&k);
		mx=-1;
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(mx<a)
				mx=a;
			um[a]=1;
		}
		for(register long long int i=0;i<=mx;i++)
		{
			if(um[i]==0)
			{
				if(k==0)
				{
					ans=i;
					flag=1;
					break;
				}
				else
				{
					k--;
				}
			}
		}
		if(flag==0)
		{
			ans=mx+k+1;
		}
		
		printf("%lld\n",ans);

	}
}