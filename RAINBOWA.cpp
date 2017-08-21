//RAINBOWA
#include<iostream>
using namespace std;
int input()
{
	int num=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c==' ')
			break;
		num=num*10+(c-'0');
		c=getchar();
	}
	return num;
}
int main()
{
	int t,n,a[102],temp,flag,mid;
	//scanf("%d",&t);
	//getchar();
	t=input();
	while(t)
	{
		flag=1;
		temp=1;
		n=input();

		if(n%2==0)
		{
			mid=n/2-1;
		}
		else
		{
			mid=n/2;
		}

		for(register int i=0;i<n;i++)
		{
			a[i]=input();
					
			if(i>mid)
				continue;
			
			if(temp==a[i])
			{
				continue;
			}
			else if(a[i]==temp+1)
			{
					temp++;
			}	
			else if(a[i]>temp+1 || a[i]<temp)
			{
				flag=0;
			}
		}

		if(flag==0 || temp!=7)
		{
			printf("no\n");
			t--;
			continue;
		}

		for(register int i=0,j=n-1;i<=j;i++,j--)
		{
			if(a[i]!=a[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			printf("no\n");
		else printf("yes\n");
		t--;
	}
}