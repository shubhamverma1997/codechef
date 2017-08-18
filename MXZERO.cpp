//Practice
#include<iostream>
using namespace std;
int main()
{
	long long int t,n,a[100005],num,count;
	scanf("%lld",&t);
	while(t)
	{
		num=count=0;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			num=num^a[i];
		}
		for(register long long int i=0;i<n;i++)
		{
			if(a[i]==num)
				count++;
		}
		printf("%lld\n",count);
		t--;
	}
}