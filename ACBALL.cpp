//Practice
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;

	string a,b;
	scanf("%d",&t);
	while(t)
	{
		cin>>a;
		cin>>b;
		for(register long long int i=0;i<a.length();i++)
		{
			if(a[i]==b[i])
			{
				if(a[i]=='W')
					printf("B");
				else
					printf("W");
			}
			else
				printf("B");

		}
		printf("\n");
		t--;
	}
}