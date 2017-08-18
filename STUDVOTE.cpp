//Practice
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int count,t,n,a,k,c[101];
	scanf("%d",&t);
	while(t)
	{
		count=0;
		memset(c,0,101*sizeof(int));
		scanf("%d",&n);
		scanf("%d",&k);
		for(register int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a==i+1)
			{
				c[a]=-10000;
			}
			c[a]++;
		}
		for(register int i=1;i<=n;i++)
		{
			if(c[i]>=k)
				count++;
		}
		printf("%d\n",count);


		t--;
	}
}