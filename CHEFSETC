#include<iostream>
#include<stdio.h>
using namespace std;
int flag=0;
	void tsum(long int array[4],int i,int isup,long int csum)
	{
		if(::flag==1)
			return;
		if((csum==0)&&isup==1)
		{
			cout<<"Yes"<<endl;
			::flag=1;
			return;
		}
		if(i==4)
			return;
 
		long int temp=csum;
		temp=temp+array[i];
		tsum(array,i+1,1,temp);
		tsum(array,i+1,0,csum);
	}
int main()
{
	long int t,a[4],i;
	scanf("%ld",&t);
	while(t>0)
	{
		::flag=0;
		i=0;
		scanf("%ld",&a[0]);
		scanf("%ld",&a[1]);
		scanf("%ld",&a[2]);
		scanf("%ld",&a[3]);
		tsum(a,0,0,0);
		if(::flag==0)
			cout<<"No"<<endl;
 
		t--;
	}
} 
