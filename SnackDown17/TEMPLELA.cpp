#include<iostream>
using namespace std;
int main()
{
	int s,n,h,flag=1;
	scanf("%d",&s);
	while(s)
	{
		flag=1;
		scanf("%d",&n);
		if(n%2==0)
		{
			flag=0;
		}
		for(register int i=1;i<=n/2+1;i++)
		{
			scanf("%d",&h);
			if(flag==1)
			{
				if(h!=i)
				{
					flag=0;
				}

			}
		}	
		for(register int i=n/2+2;i<=n;i++)
		{
			scanf("%d",&h);
			if(flag==1)
			{
				if(h!=n-i+1)
				{
					flag=0;
				}
			}
		}

		if(flag==0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
		s--;
	}

}
