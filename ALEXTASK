#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	long long int time,a[501],small1,small2,lcm,temp;
	while(t!=0)
	{
		lcm=1000000000000000000;
		scanf("%d",&n);
		for(register int i=0;i<n;++i)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		
		for(long long int* i=a;i<a+n;++i)
		{
			if(lcm<*i)
				break;
			for(register long long int* j=i+1;j<a+n;++j)
			{
 
				if(lcm<*j)
					break;
				
				small1=*i;
				small2=*j;
				//cout<<"{"<<small1<<","<<small2<<"}"<<endl;
				//cout<<small1<<"-"<<small2;
				
				while(small1!=small2)
				{
				//	cout<<small1<<"-"<<small2;
				//	cout<<"in";
					if(small2%small1==0 || small1%small2==0)
						{
							if(small1>small2)
							small1=small2;
							else
								small2=small1;
				//			cout<<"here3";
				//cout<<"/"<<small1<<"-"<<small2<<"?";
							break;
						}
					
					else if(small1<small2)
						{
				//	cout<<"here2";
							small2=small2-(small2/small1)*small1;
						}
 
					else if(small1>small2)
					{
							small1=small1-(small1/small2)*small2;
				//		cout<<"here1";
					}
					
				}
				//cout<<"["<<small1<<"]";
				temp=(*i)/small1*(*j);
				//cout<<temp<<","<<endl;
				if(lcm>temp)
					lcm=temp;
			}
			//for(int i=0;i<n;i++)
			//	cout<<a[i];
		}
		printf("%lld\n",lcm);
		t--;
	}
}  
Submission Info:
