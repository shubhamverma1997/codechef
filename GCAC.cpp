//GCAC
#include<iostream>
#include<algorithm>
#define ll long long int
#define vpll vector< pair<long long int , long long int> >
using namespace std;

struct greatercustom
{
	template<class T>
	bool operator()(T const &a,T const &b) const {return a>b;}
};

ll input()
{
	ll num=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c==' ')
			break;
		num=num*10+(c-'0');
		c=getchar();
	}
	return num;
}
int main()
{
	ll t,n,m,minSalary[1004],sum,com,num,maxsal,maxc;
	ll offeredSalary[1004],maxJobOffers[1004],flag[1004];
	ll qual[1004][1004];
	
	char c;
	t=input();
	//scanf("%lld",&t);
	while(t)
	{
		//vpll q[1004];
		sum=0;
		com=0;
		num=0;
		n=input();
		//scanf("%lld",&n);
		m=input();
		//scanf("%lld",&m);
		for(register ll i=1;i<=n;i++)
		{
			//scanf("%lld",&minSalary[i]);
			minSalary[i]=input();
		}
		for(register ll i=1;i<=m;i++)
		{
			flag[i]=0;
			//scanf("%lld",&offeredSalary[i]);
			//scanf("%lld",&maxJobOffers[i]);
			offeredSalary[i]=input();
			maxJobOffers[i]=input();
		}
		//getchar();
		for(register ll i=1;i<=n;i++)
		{
			maxsal=-1;
			maxc=-1;
			for(register ll j=1;j<=m;j++)
			{
				c=getchar();
				if(c=='1' && maxJobOffers[j]>0 && offeredSalary[j]>=minSalary[i])
				{
					if(maxsal<offeredSalary[j])
					{
						maxsal=offeredSalary[j];
						maxc=j;
					}

				}
			}
				if(maxc!=-1)
				{
					sum+=maxsal;
					num++;
					maxJobOffers[maxc]--;
					flag[maxc]=1;
				}
			getchar();
		}

		for(register ll i=1;i<=m;i++)
		{
			if(flag[i]==0)
				com++;
		}
		printf("%lld %lld %lld\n",num,sum,com);
		t--;
	}

}