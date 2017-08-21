//CHEFMOVR
#include<iostream>
#define ll long long int
using namespace std;
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
	long long int t,n,d,a[100005],sum,flag,target,temp,moves;
	t=input();
	while(t)
	{
		flag=1;
		sum=0;
		moves=0;
		n=input();
		d=input();
		for(register long long int i=0;i<n;i++)
		{
			a[i]=input();
			sum+=a[i];
		}
		if(sum%n!=0)
		{
			printf("-1\n");
			t--;
			continue;
		}

		target=sum/n;
		for(register ll i=0;i<d;i++)
		{
			//cout<<"here";
			for(register ll j=i;j<n;j+=d)
			{
				if(j+d<n)
				{
					while(a[j]>target)
					{
						a[j+d]=a[j+d]+a[j]-target;
						moves+=a[j]-target;
						a[j]=target;
					}
					while(a[j]<target)
					{
						a[j+d]=a[j+d]-(target-a[j]);
						moves+=target-a[j];
						a[j]=target;
						
					}
				}

			}
		}
		//cout<<endl;
		for(register ll i=0;i<n;i++)
		{
			//cout<<a[i]<<" ";
			if(a[i]!=target)
			{
				flag=0;
				
			}
		}
		if(flag==0)
			printf("-1\n");
		else
		{
			printf("%lld\n",moves);
		}
		t--;
	}
}