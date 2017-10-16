#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
#define r register
#define ll long long int
using namespace std;

vector<ll> v[100005];
ll t,n,q,temp,val;
ll ver1,ver2,c1,c2,ans;
ll wt[100005],v1[100005],v2[100005];
ll nsum[100005],ssum[100005];
ll midsum[100005];

ll path(ll nn,ll size,ll start,ll end)
{
	//cout<<nn<<"?"<<start<<" "<<end<<"\n";
	ll sum1=0,sum2=0;
	for(r ll i=start;i!=end;i++)
	{
		
		if(i==size+1)
			i=1;
		if(i==end)
			break;
		//cout<<i<<"->";
		sum1=sum1+v[nn][i];

	}

	//cout<<"\n"<<sum1<<"\n??\n";
	for(r ll i=end;i!=start;i++)
	{
		
		if(i==size+1)
			i=1;
		if(i==start)
			break;
		//cout<<i<<"->";
		sum2=sum2+v[nn][i];
	}
	//cout<<"\n"<<sum2<<"\n\n";
	return min(sum1,sum2);
}

ll previous,next;
ll findpath(ll ver1,ll c1,ll ver2,ll c2)
{
	ans=0;
	if(c1<c2)
	{
		//sum of cycles
		ans =nsum[c2-1]-nsum[c1];
		//sum of connections between cycles
		previous=c1-1;
		ans+=midsum[c2-1]-midsum[c1-1];
		
		//inside path of cycles
		ans+=path(c1,v[c1][0],ver1,v1[c1]);
		previous=c2-1;
		if(previous==0)
			previous=n;
		ans+=path(c2,v[c2][0],v2[previous],ver2);
		
		return ans;
	}
	else if(c2<=c1)
	{
		//sum of cycles
		ans+=nsum[n]-nsum[c1];
		ans+=nsum[c2-1];
		//sum of connections between cycles
		ans+=midsum[n]-midsum[c1-1];
		ans+=midsum[c2-1];
		previous=c2-1;
		if(previous==0)
			previous=n;
		ans+=path(c1,v[c1][0],v1[c1],ver1);
		
		ans+=path(c2,v[c2][0],ver2,v2[previous]);
		return ans;
	}

}

int main()
{	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	scanf("%lld",&t);
	while(t--)
	{

		scanf("%lld",&n);
		scanf("%lld",&q);
		
		for(r ll i=1;i<=n;i++)
		{
			scanf("%lld",&temp);
			v[i].resize(temp+5);
			v[i][0]=temp;
			for(r ll j=1;j<=temp;j++)
			{
				scanf("%lld",&val);
				v[i][j]=val;
			}
		}

		midsum[0]=0;
		for(r ll i=1;i<=n;i++)
		{
			scanf("%lld",&v1[i]);
			scanf("%lld",&v2[i]);
			scanf("%lld",&wt[i]);
			midsum[i]=midsum[i-1]+wt[i];
		}
		ssum[1]=path(1,v[1][0],v2[n],v1[1]);
		for(r ll i=2;i<=n;i++)
		{
			ssum[i]=path(i,v[i][0],v2[i-1],v1[i]);
		}
		nsum[0]=0;
		for(r ll i=1;i<=n;i++)
		{
			nsum[i]=nsum[i-1]+ssum[i];
			//cout<<ssum[i]<<" ";
		}

		for(r ll i=1;i<=q;i++)
		{
			scanf("%lld",&ver1);
			scanf("%lld",&c1);
			scanf("%lld",&ver2);
			scanf("%lld",&c2);

			if(c1==c2)
			{
				//cout<<c1<<" "<<c2<<"\n";
				//cout<<"h";
				ans=path(c1,v[c1][0],ver1,ver2);
				ans=min(ans,
						findpath(ver1,c1,ver2,c2));
				printf("%lld\n",ans);
			}
			if(c1<c2)
			{
				//cout<<c1<<" "<<c2<<"\n";
				//cout<<"i";
				ans=min(findpath(ver1,c1,ver2,c2)
						,findpath(ver2,c2,ver1,c1));
				printf("%lld\n",ans);
			}
			if(c2<c1)
			{
				//cout<<c1<<" "<<c2<<"\n";
				//cout<<"j";
				ans=min(findpath(ver1,c1,ver2,c2)
						,findpath(ver2,c2,ver1,c1));
				printf("%lld\n",ans);
			}
		}
	}
}