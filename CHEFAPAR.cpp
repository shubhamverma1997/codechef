#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int t,n,fine,a,temp;
	scanf("%lld",&t);
	while(t)
	{
		int flag=0;
		
		scanf("%lld",&n);
		temp=n;
		fine=0;
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a==0&&flag==0)
				{
					fine=n-i;
					flag=1;
				}
			if(a==1)
			{
				temp--;
			}
		}
		temp=(temp)*1000+fine*100;
		cout<<temp<<endl;
		t--;
	}
} 
