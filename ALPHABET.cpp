//Practice
//Studying Alphabet
#include<iostream>
using namespace std;
int a[26];
int main()
{
	char s;
	int n,flag;
	s=getchar();
	while(s!='\n')
	{
		a[s-'a']=1;
		s=getchar();
	}
	scanf("%d",&n);
	getchar();
	while(n)
	{
		flag=1;
		s=getchar();
		while(s!='\n')
		{
			if(a[s-'a']==0)
			{
				flag=0;
			}
			s=getchar();
		}
		if(flag==0)
			printf("No\n");
		else
			printf("Yes\n");
		n--;
	}
}