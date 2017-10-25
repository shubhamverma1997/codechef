#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#define ll long long int
using namespace std;
int main()
{
	long long int t,y,ans,temp,a;

	scanf("%lld",&t);
	while(t--)
	{
		ans=0;
		scanf("%lld",&y);
		temp=y-700;
		if(temp<=0)
		{
			for(register long long int i=1;i*i<=y;i++)
			{
				if((y-i*i)<=700)
					ans=ans+(y-i*i);
				else
					ans=ans+700;
			}
		}
		else
		{
			a=(ll)(sqrt(temp));
			ans=ans+(ll)(700*a);
			for(long long int i=(a)+1;i*i<=y;i++)
			{
				if((y-i*i)<=700)
					ans=ans+(y-i*i);
				else
					ans=ans+700;
			}
		}

		printf("%lld\n",ans);
	}
}