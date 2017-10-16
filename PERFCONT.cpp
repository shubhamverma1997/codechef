#include<iostream>
using namespace std;
int main()
{
	long long int t,p,a,n,ccnt,hcnt;
	scanf("%lld",&t);
	while(t--)
	{
		ccnt=0;
		hcnt=0;
		scanf("%lld",&n);
		scanf("%lld",&p);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a>=p/2)
				ccnt++;
			if(a<=p/10)
				hcnt++;
		}
		if(ccnt==1 && hcnt==2)
			printf("yes\n");
		else
			printf("no\n");
	}

}