#include<iostream>
using namespace std;
int main()
{
	int r,l,flag=0;
	char str[700];
	scanf("%d",&r);
	while(r)
	{
		flag=0;
		scanf("%d",&l);
		scanf("%s",str);
		for(register int i=0;i<l;i++)
		{
			if(str[i]=='.')
				continue;
			else if(str[i]=='H')
			{
				if(flag==0||flag==2)
				{
					flag=1;
					continue;
				}
				else if(flag==1)
				{
					flag=10;
					break;
				}

			}
			else if(str[i]=='T')
			{
				if(flag==0||flag==2)
				{
					flag=10;
					break;
				}
				if(flag==1)
				{
					flag=2;
					continue;
				}
			}
		}
		if(flag==1||flag==10)
		{
			printf("Invalid\n");
		}
		else
		{
		
			printf("Valid\n");
		}
		r--;
	}
}
