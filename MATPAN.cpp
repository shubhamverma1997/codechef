#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int t,n,a[26],sum=0;
	scanf("%lld",&t);
	string s;
	while(t)
	{
		sum=0;
		for(register int i=0;i<26;i++)
		{
			scanf("%lld",&a[i]);
		}
		cin>>s;
		for(register long long int i=0;i<s.length();i++)
		{
			a[s[i]-'a']=0;
		}
		for(register int i=0;i<26;i++)
			sum+=a[i];
		printf("%lld\n",sum);

		t--;
	}
}