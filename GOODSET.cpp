#include<iostream>
using namespace std;
int main()
{
	int t,n,counter;
	scanf("%d",&t);
	while(t)
	{
		counter=0;
		scanf("%d",&n);
		for(register int i=499;i>0;i--)
		{
			if(counter==n)
				break;

			printf("%d ",i);
			counter++;
		}
		printf("\n");
		t--;
	}
}
