//Practice
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,area,flag,a[1005];
	scanf("%d",&t);
	while(t)
	{
		flag=0;
		area=0;
		scanf("%d",&n);				
		for(register int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(register int i=n-1;i>0;i--)
		{
			if(a[i]==a[i-1])
			{	
				if(flag==0)
				{
					area=area+a[i];
					flag=1;
					i--;
					continue;
				}
				if(flag==1)
				{
					area=area*a[i];
					flag=2;
					break;
				}
			}
		}
		if(flag==2)
			printf("%d\n",area);
		else
			printf("-1\n");
		t--;
	}
}