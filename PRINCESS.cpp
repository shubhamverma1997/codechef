//Princess and Beauty
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,flag;
	scanf("%d",&t);
	string s;
	while(t)
	{
		flag=0;
		cin>>s;
		if(s.length()==2)
		{
			if(s[0]==s[1])
			{
				printf("YES\n");
			}
			else
				printf("NO\n");
			t--;
			continue;
		}
		for(register long long int i=1;i<s.length()-1;i++)
		{
			if(s[i-1]==s[i+1] || s[i-1]==s[i] || s[i]==s[i+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("NO\n");
		else
			printf("YES\n");
		t--;
	}
}