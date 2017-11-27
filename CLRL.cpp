#include<iostream>
using namespace std;
long long int a[1000006];
long long int t,r,n,temp,ldif,rdif,flag;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		flag=1;
		scanf("%lld",&n);
		scanf("%lld",&r);
		ldif=100000000000000;
		rdif=100000000000000;
		for(register long long int i=0;i<n-1;i++)
		{
			scanf("%lld",&temp);
			if(flag==0)
				continue;
			if(temp<r)
			{
				if(ldif>r-temp)
				{
					ldif=r-temp;
				}
				else
				{
					//cout<<temp<<"<--\n";
					flag=0;
				}
			}			
			if(temp>r)
			{
				if(rdif>temp-r)
				{
					rdif=temp-r;
				}
				else
				{
					//cout<<temp<<"<--\n";
					flag=0;
				}
			}
		}
		scanf("%lld",&temp);
		if(temp!=r)
		{
			flag=0;
		}
		if(flag==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}

	}
}