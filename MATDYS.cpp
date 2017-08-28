#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	unsigned long long int n,q,k,ans;
	cin>>q;
	while(q)
	{
		
		ans=0;
		cin>>n>>k;
		while(n>0)
		{
			ans=ans<<(unsigned long long int)1;
			ans=ans+k%2;
			k=k/2;
			n--;
		}
		cout<<ans<<"\n";
		q--;
	}
}
