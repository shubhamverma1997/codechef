#include<iostream>
using namespace std;
int main()
{
	int t,n,count1,count2;
	char a[60];
	scanf("%d",&t);
	while(t)
	{
		int flag=0,temp=0;
		count1=0;
		count2=0;
		cin>>a;
		for(register int i=0;a[i]!='\0';i++)
		{
			if(flag==0 && a[i]=='D')
			{
				flag=1;
				continue;
			}
			if(flag==1 && a[i]=='D')
			{
				continue;
			}
			if(flag==1 && a[i]=='U')
			{
				count1++;
				flag=0;
				continue;
			}
		}
		if(flag==1)
		{
			count1++;
		}
		flag=0;
		for(register int i=0;a[i]!='\0';i++)
		{
			if(flag==0 && a[i]=='U')
			{
				flag=1;
				continue;
			}
			if(flag==1 && a[i]=='U')
			{
				continue;
			}
			if(flag==1 && a[i]=='D')
			{
				count2++;
				flag=0;
				continue;
			}
		}
		if(flag==1)
		{
			count2++;
		}
		
		if(count1>count2)
			cout<<count2<<endl;
		else
			cout<<count1<<endl;
		t--;
	}
}
