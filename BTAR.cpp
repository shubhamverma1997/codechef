#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a;
	long long int one[100005],oni;
	long long int two[100005],twi;
	long long int thr[100005],thi;
	long long int steps,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		steps=0;
		oni=0;
		twi=0;
		thi=0;
		cin>>n;
		for(long long int i=0;i<n;i++)
		{
			cin>>a;
			sum=sum+a;
			if(a%4==1)
			{
				one[oni]=a;
				oni++;
			}
			if(a%4==2)
			{
				two[twi]=a;
				twi++;
			}
			if(a%4==3)
			{
				thr[thi]=a;
				thi++;
			}
		}
		if(sum%4!=0)
		{
			cout<<"-1\n";
			continue;
		}
		steps=steps+min(oni,thi);
		oni=oni-steps;
		thi=thi-steps;
		
		if(oni==0)
		{
			twi=twi+thi/2;
			steps=steps+thi/2;
			steps=steps+twi/2;

		}
		else if(thi==0)
		{
			twi=twi+oni/2;
			steps=steps+oni/2;
			steps=steps+twi/2;
		}
		cout<<steps<<"\n";
	}
}