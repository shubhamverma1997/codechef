#include<iostream>
using namespace std;
int main()
{
	long long int t,m;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&m);
		if(m%3==0)
			cout<<m/3<<" "<<2*(m/3)<<"\n";
		else if(m%3==1)
			cout<<m/3+1<<" "<<2*(m/3)<<"\n";
		else
			cout<<m/3+1<<" "<<2*(m/3)+1<<"\n";
		t--;
	}
}