#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int t,maximum=0,temp,index,flag;
	char seq[100004],previous;

	scanf("%lld",&t);
	while(t)
	{
		flag=0;
		temp=1;
		maximum=0;

		scanf("%s",seq);

		for(register int i=0;seq[i]!='\0';i++)
		{
			if(seq[i]=='<'||seq[i]=='>')
			{
				flag=1;
				previous=seq[i];
				index=i;
				break;
			}
			/*if(seq[i]=='>')
			{
				flag=1;
				previous=seq[i];
				index=i;
				break;
			}*/
		}

		for(register long long int i=index+1;seq[i]!='\0';i++)
		{
			if(seq[i]=='=')
			{
				continue;
			}
			if(seq[i]==previous)
			{
					temp++;
			}
			else
			{
				if(maximum<temp)
					maximum=temp;
				temp=1;
				previous=seq[i];
				continue;
			}
		}

		if(maximum<temp && flag==1)
					maximum=temp;

		printf("%lld\n",maximum+1);
		t--;
	}
}
