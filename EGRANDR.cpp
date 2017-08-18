//Practice
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,a,ma,mi,flag;
	double avg;
	scanf("%lld",&t);
	while(t)
	{
		avg=0;
		ma=-1;
		mi=6;
		scanf("%lld",&n);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			avg+=a;
			ma=max(ma,a);
			mi=min(mi,a);
		}
		avg=avg/(double)(n);
		if(avg>=4 && mi>2 && ma==5)
			printf("Yes\n");
		else
			printf("No\n");

		t--;
	}
}