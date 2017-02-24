#include<iostream>
#include<stdio.h>
 
#define lld long long int
using namespace std;
long long int a[10000000];
long long int sum[1000000];
 
int main()
{
	long long int t,n,o1,o2,final,temp,flag,start,elec,ocount;
	scanf("%lld",&t);
	while(t)
	{
		
		flag=0;
		scanf("%lld",&o1);
		scanf("%lld",&o2);
		n=o1*o2;
		long long int c=0,in=0;
		sum[0]=0;
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			c++;
			if(c>o2)
			{
				c=1;
				in++;
				sum[in]=0;
			}
			sum[in]+=a[i];
		}
 
 
		/*
		for(register long long int i=0;i<=in;i++)
		{
			if(sum[i]>o2/2)
				final++;
		}
 
		if(final>o1/2)
		{
			printf("1\n");
			t--;
			continue;
		}
		*/
		for(register long long int i=0;i<o2;i++)
		{
			final=0;
			for(register long long int j=0;j<=in;j++)
			{
				sum[j]+=a[(j*o2+i+o2)%n]-a[(j*o2+i)%n];
			}
			for(register long long int i=0;i<=in;i++)
			{
				if(sum[i]>o2/2)
					final++;
			}	
			if(final>o1/2)
			{
				flag=1;
				break;
			}
		}
		printf("%lld\n",flag);
		t--;
	}
}  
