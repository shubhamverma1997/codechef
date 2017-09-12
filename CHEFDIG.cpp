#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
	long long int t,dig[10]={0},temp,count;
	char c;
	scanf("%lld",&t);
	getchar();
	while(t--)
	{
		count=0;
		c=getchar();
		while(c!='\n')
		{
			dig[c-'0']++;
			c=getchar();
		}
		for(register int i=65;i<=90;i++)
		{
			temp=i%10;
			if( dig[temp]>0 )
			{
				dig[temp]--;

				if( dig[(i/10)%10]>0)
				printf("%c",char(i));
				
				dig[temp]++;
			}
		}
		printf("\n");
		memset(dig,0,10*sizeof(long long int));
	}
}