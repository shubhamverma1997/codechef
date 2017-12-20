#include<iostream>
#define ll long long int
using namespace std;
long long int data[2000006],sumdata[1000006];
int main()
{
	long long int t,n,temp,o,e,sum;
	data[0]=0;
	data[1]=0;
	for(register ll i=2;i<2000005;i++)
	{
		o=0;
		e=0;
		temp=i;
		while(temp!=0)
		{
			if((temp%10)%2==0)
				e=e+temp%10;
			else
				o=o+temp%10;
			temp=temp/10;
		}
		data[i]=data[i-1]+abs(o-e);
		//sumdata[i-1]=sumdata[i-2]+data[i]*(i-1);
	}
	sumdata[0]=0;
	sumdata[1]=2;
	sumdata[2]=12;
	for(register ll i=3;i<1000006;i++)
	{
		sumdata[i]=sumdata[i-1];
		sumdata[i]+=(data[2*i-1]-data[i])*2;
		sumdata[i]+=data[2*i]-data[2*i-1];
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",sumdata[n]);
	}

}