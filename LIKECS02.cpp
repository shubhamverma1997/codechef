#include<iostream>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(register int i=2,j=0;j<n;i+=2)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
	}
}