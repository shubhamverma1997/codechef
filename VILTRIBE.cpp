#include<iostream>
using namespace std;
int main()
{
	long long int t,flag=-1,a,b,d;
	char c;
	scanf("%lld",&t);
	getchar();
	while(t--)
	{
		a=0;
		b=0;
		d=0;
		flag=-1;
		c=getchar();
		if(c=='A')
		{
			a++;
			flag=1;
		}
		else if(c=='B')
		{
			b++;
			flag=2;
		}
		c=getchar();
		while(c!='\n')
		{
			if(c=='A')
			{
				if(flag==1)
				{
					a++;
					a+=d;
				}
				else
				{
					flag=1;
					a++;
				}
			d=0;
			}
			else if(c=='B')
			{
				if(flag==2)
				{
					b++;
					b+=d;
				}
				else
				{
					flag=2;
					b++;
				}
				d=0;
			}
			else if(c=='.')
				d++;
			c=getchar();
		}
		cout<<a<<" "<<b<<"\n";
	}
}