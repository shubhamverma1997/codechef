#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,cs,cm;
	scanf("%d",&t);
	while(t)
	{
		cs=0;
		cm=0;
		char s[101];
		cin>>s;
		for(register int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='s')
				continue;
			if(s[i]=='m')
			{
				if(i!=0&&s[i-1]=='s')
				{
					s[i-1]='0';
					continue;
				}
				if(s[i+1]!='\0'&&s[i+1]=='s')
				{
					s[i+1]='0';
					continue;
				}
			}
		}

		for(register int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='s')
				cs++;
			if(s[i]=='m')
				cm++;
		}
		if(cs==cm)
		{
			printf("tie\n");
		}
		else if(cs>cm)
		{
			printf("snakes\n");
		}
		else if(cs<cm)
		{
			printf("mongooses\n");
		}
		t--;
	}
}
