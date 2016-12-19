#include<iostream>
#define mod 1000000007
using namespace std;
int main()
{
	int t;
	long long int x,n,sum,p,r;
	scanf("%d",&t);
	while(t>0)
	{
		cin>>n;
		if(n==1)
		{
			cout<<0<<endl;
			t--;
			continue;
		}
		n=n-1;
		x=2;
		sum=1;
		 while (n > 0)
    {
        if (n & 1)
            sum = (sum*x) % mod;
 
        n = n>>1;
        x = (x*x) % mod;  
  }
   		for(int i=1;i<n;i++)
		{
			sum=(sum<<1)%mod;
		}
		sum=(sum-2+mod)%mod;
		cout<<sum<<endl;
		t--;
	}
} 
