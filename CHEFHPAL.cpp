#include<iostream>
#define ll register long long int
using namespace std;
int main()
{
	long long int t,n,a,temp;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&a);
		if(a==1)
		{
			printf("%lld ",n);
			for(ll i=0;i<n;i++)
			{
				printf("%c",'a');
			}
			printf("\n");
			continue;
		}
		if(a==2)
		{
			char c[2];
			c[0]='a';
			c[1]='b';
			int flag=0;
			if(n<=2)
			{
				printf("1 ");
				for(ll i=0;i<n;i++)
				{
					printf("%c",c[flag]);
					flag=1-flag;
				}
				printf("\n");
			}
			else if(n<=4)
			{
				printf("2 ");
				printf("aa");
				n=n-2;
				for(ll i=0;i<n;i++)
					printf("b");
				printf("\n");
			}
			else if(n<=8)
			{
				printf("3 ");
				printf("aaaba");
				n=n-5;
				for(ll i=0;i<n;i++)
					printf("b");
				printf("\n");
			}
			else
			{
				char c[10];
				c[0]='a';
				c[1]='b';
				c[2]='a';
				c[3]='b';
				c[4]='b';
				c[5]='a';
				c[6]='\0';
				printf("4 ");
				printf("aaaababba");
				n=n-9;
				while(n>=6)
				{
					cout<<c;
					n=n-6;
				}
				if(n<=3)
				{
					for(ll i=0;i<n;i++)
					{
						printf("a");
					}
				}
				else
				{
					for(ll i=0;i<n;i++)
					{
						printf("%c",c[i]);
					}
				}
				printf("\n");
			}
			continue;
		}
		printf("1 ");
		temp=0;
		for(ll i=0;i<n;i++)
		{
			printf("%c",'a'+temp);
			temp++;
			temp=temp%a;
		}
		printf("\n");
	}
}