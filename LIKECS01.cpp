#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,flag=0;
	char s[105];
	cin>>t;
	while(t--)
	{
		flag=0;
		int c[26]={0};
		cin>>s;
		for(register int i=0;s[i]!='\0';i++)
		{
			c[s[i]-'a']++;
		}
		for(register int i=0;i<26;i++)
		{
			if(c[i]>=2)
				flag=1;
		}
		if(flag==0)
			printf("no\n");
		else
			printf("yes\n");
	}
}