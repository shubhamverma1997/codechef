#include<iostream>
using namespace std;
int main()
{
	long long int t,k,a,b,ans;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&k);
		scanf("%lld",&a);
		scanf("%lld",&b);
		ans=abs(a-b)-1;
		if(ans>(k-2)-ans)
			cout<<(k-2)-ans<<"\n";
		else if(ans<(k-2)-ans)
			cout<<ans<<"\n";
		else if(ans==(k-2)-ans)
			cout<<"0\n";
		t--;
	}
}