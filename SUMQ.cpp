#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,p,q,r,a[100001],b[100001],xsum,zsum;
	long long int c[100001],sum;
	scanf("%lld",&t);
	while(t)
	{
		sum=0;
		xsum=0;
		zsum=0;
		scanf("%lld",&p);
		scanf("%lld",&q);
		scanf("%lld",&r);
		for(register long long int i=0;i<p;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(register long long int i=0;i<q;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(register long long int i=0;i<r;i++)
		{
			scanf("%lld",&c[i]);
		}

		sort(a,a+p);
		sort(b,b+q);
		sort(c,c+r);

		long long int temp,tempxy=0,tempyz=0,diffx=0,diffz=0,
					  mod=1000000007,dcz=0;
		//tempxy(sum of x and y)
		//tempyz(sum of y and z)
		//xstop(flag for x)
		//zstop(flag for z)
		//diffx(total difference between all x and x[0])
		//diffx(total difference between all y and y[0])
		//diffx(total difference between all z and z[0])

		long long int ts=0;
		for(register long long int i=0,j=0,k=0;j<q;j++)
		{
			//cout<<"here";
			while(i<p && a[i]<=b[j])
			{
				diffx+=( (a[i]%mod)-(a[0]%mod) )%mod;
				diffx=diffx%mod;
				i++;
			}
			while(k<r && c[k]<=b[j])
			{
				diffz+= ( (c[k]%mod)-(c[0]%mod) )%mod;
				diffz=diffz%mod;
				k++;
			}
			//cout<<endl<<"i="<<i<<" j="<<j<<" k="<<k<<endl;

			tempxy=( (a[0]%mod) + (b[j]%mod) )%mod;
			tempyz=( (b[j]%mod) + (c[0]%mod) )%mod;

			temp=((tempxy%mod)*(tempyz%mod))%mod;
			sum+=( (((temp%mod)*(i%mod))%mod) *(k%mod))%mod;
			sum=sum%mod;

			sum+=((tempxy%mod)*(( (diffz%mod) * (i%mod) )%mod))%mod;
			sum=sum%mod;

			sum+=((tempyz%mod)*(( (diffx%mod) * (k%mod) )%mod))%mod;
			sum=sum%mod;

			sum+=((diffx%mod)*(diffz%mod))%mod;
			sum=sum%mod;
			//ts=sum-ts;
			//cout<<ts<<endl;
		}
		sum=sum%mod;
		printf("%lld\n",sum);

		t--;
	}
}
