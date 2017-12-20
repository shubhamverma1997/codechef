#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,a[100005],d,cnt=0;
	cin>>n;
	cin>>d;
	for(register long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(register long long int i=0;i<n;i++)
	{
		if(i+1<n && a[i+1]-a[i]<=d)
		{
			cnt++;
			i++;
		}
	}
	cout<<cnt;
}