#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t)
	{
		int c=1;
		cin>>n;
		printf("%d\n",n);
		for(register int i=1;i<=n;i++)
		{
			printf("%d\n",n);
			for(register int j=1;j<=n;j++)
			{
				if(c!=n)
					printf("%d %d %d\n",j,c,c+1);
				else
					printf("%d %d %d\n",j,c,1);
			}	
			c++;
		}
		t--;
	}
}
