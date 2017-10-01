#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,arr[5005],diff;
	scanf("%lld",&t);
	while(t--)
	{
		diff=10000000000000000;
		scanf("%lld",&n);
		for(register int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		sort(arr,arr+n);
		for(register int i=0;i<n-1;i++)
		{
			diff=min(diff,arr[i+1]-arr[i]);
		}
		printf("%lld\n",diff);
	}
}