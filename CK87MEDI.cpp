#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,k,arr[1000];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(register long long int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		printf("%lld\n",arr[(n+k)/2]);
	}	
}