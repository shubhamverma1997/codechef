#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int key,q,n,factor,temp,arr[1025],odd[1025],oi,ii,even[1025];
	cin>>q;
	while(q)
	{
		cin>>n>>key;

		factor=1<<n;
		for(int i=0;i<factor;i++)
			arr[i]=i;

		factor=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<(1<<n);j=j+(1<<n)/factor)
			{
				//cout<<"here";
				oi=0;ii=0;
				for(int k=j;k<j+(1<<n)/factor;k++)
				{
					//cout<<arr[k]<<" ";
					if(k%2==0)
						even[ii++]=arr[k];
					else
						odd[oi++]=arr[k];
				}
				//cout<<"\n";
				temp=j;
				int in=ii;
				while(ii>0)
				{
					arr[temp++]=even[in-ii];
					ii--;
				}
				in=oi;
				while(oi>0)
				{
					arr[temp++]=odd[in-oi];
					oi--;
				}
			}
			factor=factor<<1;
		}


		for(int i=0;i<(1<<n);i++)
		{
			//cout<<arr[i]<<" ";
			
			if(key==arr[i])
			{
				cout<<i<<"\n";
				break;
			}
		}
		q--;
	}
}