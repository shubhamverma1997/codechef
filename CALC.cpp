#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n,b;
	double temp2;
	long long int sum,tsum1,tsum2,holder1,holder2;
	scanf("%lld",&t);
	while(t)
	{
		sum=0;
		scanf("%lld",&n);
		scanf("%lld",&b);
		temp2=n/2;
		//cout<<temp2<<" "; 
		if(fmod(temp2,b)!=0)
		{
			tsum1=temp2;
			tsum2=temp2;
			//increasing first
			tsum1=tsum1-double( fmod(temp2,b) );
			//increasing second
			tsum2+= (double)(b) - double( fmod(temp2,b) );

			holder1=(tsum1/b)*(n-tsum1);
			holder2=(tsum2/b)*(n-tsum2);
			if(holder1>=holder2)
			{
				sum=holder1;
			}
			else
			{
				sum=holder2;
			}
		}
		else
		{
			sum=(temp2/b)*(n-temp2);
		}
		//cout<<temp2<<" ";
		cout<<sum<<endl;
		t--;
	}
}
