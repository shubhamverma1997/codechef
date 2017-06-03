#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,height[100001];
	scanf("%lld",&t);
	while(t)
	{
		long long int counter=0,pivot1,pivot2;
		scanf("%lld",&n);
		long long int temp=0;
		while(temp!=n)
		{
			scanf("%lld",&height[temp]);
			temp++;
		}
		pivot1=0;
		pivot2=n-1;
		for(register long long int i=0;i<=n/2;i++)
		{
			if(height[i]>i+1)
			{
				counter+=(height[i]-(i+1));
				height[i]=i+1;
			}
			if(height[i]<i+1)
			{
				//cout<<"1"<<i<<endl;;
				pivot1=i;
			}
		}


		temp=1;
		for(register long long int i=n-1;i>n/2;i--)
		{
			if(height[i]>temp)
			{
				counter+=height[i]-temp;
				height[i]=temp;
			}
			if(height[i]<temp)
			{
				pivot2=i;
			}
			temp++;
		}

		//second normalizattion next no. can be smaller , equal
		//or just 1 bigger
		temp=height[0];
		for(register long long int i=1;i<n;i++)
		{
			if(height[i]>height[i-1])
			{
				if(height[i]-height[i-1]==1)
				{
					continue;
				}
				else
				{
					counter+=height[i]-height[i-1]-1;
					height[i]=height[i-1]+1;
				}	
			}

		}
		
		for(register long long int i=n-1;i>=1;i--)
		{
			if(height[i-1]>height[i])
			{
				if(height[i-1]-height[i]==1)
				{
					continue;
				}
				else
				{
					counter+=height[i-1]-height[i]-1;
					height[i-1]=height[i]+1;
				}	
			}

		}






		//---------------------
		long long int maxelement=height[0],maxindex=0;
		for(register long long int i=1;i<n;i++)
		{
			if(maxelement<height[i])
			{
				maxelement=height[i];
				maxindex=i;
			}
		}

		temp=height[maxindex];
		for(register long long int i=maxindex;i>=0;i--)
		{
			if(temp==height[i])
			{
				if(temp!=0)
				temp--;
				continue;
			}
			if(temp<height[i])
			{
				counter+=height[i]-temp;
				height[i]=temp;
				if(temp!=0)
					temp--;
				continue;
			}
		}
		
		temp=height[maxindex];
		for(register long long int i=maxindex;i<n;i++)
		{
			if(temp==height[i])
			{
				if(temp!=0)
					temp--;
				continue;
			}
			if(temp<height[i])
			{
				counter+=height[i]-temp;
				height[i]=temp;
				if(temp!=0)
					temp--;
				continue;
			}
		}

		/*
		for(register long long int i=0;i<n;i++)
		{
			cout<<height[i]<<" ";
		}

		cout<<endl<<counter<<endl<<endl;
		*/
		cout<<counter<<endl;
		t--;
	}

}
