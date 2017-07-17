#include<iostream>
#include<stdio.h>
using namespace std;
void inp(char *name)
{
	char c;
	int i=0;
	c=getchar();
	while(c!='\n')
	{
		name[i]=c;
		i++;
		c=getchar();
	}
	name[i]='\0';

}
int main()
{
	int t,flag,print;
	char name[32];
	scanf("%d",&t);
	getchar();
	while(t)
	{
		flag=0;
		
		inp(name);

		//cout<<name<<endl;
		for(register int i=0;name[i]!='\0';i++)
		{
			if(name[i]==32)
				flag++;
		}
		//cout<<flag<<endl;
		if(flag==0)
		{
			if(name[0]>=97)
				printf("%c",name[0]-32);
			else
				printf("%c",name[0]);
			for(register int i=1;name[i]!='\0';i++)
			{
				if(name[i]>=97)
					printf("%c",name[i]);
				else
					printf("%c",name[i]+32);
			}
			printf("\n");
		}
		if(flag==1)
		{
			print=0;
			if(name[0]>=97)
				printf("%c",name[0]-32);
			else
				printf("%c",name[0]);
			for(register int i=1;name[i]!='\0';i++)
			{
				if(name[i]==32)
				{
					print=1;
					printf(". ");
					i++;
					if(name[i]>=97)
						printf("%c",name[i]-32);
					else
						printf("%c",name[i]);
					continue;
				}
				if(print==1)
				{
					if(name[i]>=97)
						printf("%c",name[i]);
					else
						printf("%c",name[i]+32);
				}
			}
			printf("\n");
		}
		if(flag==2)
		{
			print=0;
			if(name[0]>=97)
				printf("%c",name[0]-32);
			else
				printf("%c",name[0]);

			for(register int i=1;name[i]!='\0';i++)
			{
				if(name[i]==32)
				{
					print++;
					printf(". ");
					i++;
					if(name[i]>=97)
						printf("%c",name[i]-32);
					else
						printf("%c",name[i]);
					continue;
				}
				if(print==2)
				{
					if(name[i]>=97)
						printf("%c",name[i]);
					else
						printf("%c",name[i]+32);
				}
			}
			printf("\n");
		}
		t--;
	}
}
