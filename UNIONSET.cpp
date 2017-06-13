#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,k,len,element;
	scanf("%lld",&t);
	while(t)
	{
		vector<long long int>v[2500];
		scanf("%lld",&n);
		scanf("%lld",&k);
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&len);
			for(register long long int j=0;j<len;j++)
			{
				scanf("%lld",&element);
				v[i].push_back(element);
			}
			sort(v[i].begin(),v[i].begin()+len);
		}
		sort(v,v+n);

		long long int counter=1,total=0;
		//cout<<endl;
		for(register long long int i=0;i<n-1;i++)
		{
			for(register long long int j=i+1;j<n;j++)
			{
				//cout<<"-->"<<i<<" "<<j<<"<--"<<endl;
				counter=1;
				vector<long long int>::iterator it,jt;
				for(it=v[i].begin(),jt=v[j].begin() ; it!=v[i].end() && jt!=v[j].end();)
				{
					if((*it)==counter && (*jt)==counter)
					{
						counter++;
						if((it+1)!=v[i].end())
						{
							it++;
						}
						if( (jt+1)!=v[j].end())
							jt++;
						continue;
					}
					if((*it)==counter)
					{
						counter++;
						if((it+1)!=v[i].end())
						{
							it++;
						}
						continue;
					}
					if((*jt)==counter)
					{
						counter++;
						if( (jt+1)!=v[j].end())
							jt++;
						continue;
					}
					//cout<<counter<<" " <<(*it)<<" "<<(*jt)<<endl;
					break;
					//	cout<<(*it)<<" ";
				
				}
			
				if(counter==k+1)
				{
					total++;
				}
					//cout<<endl;				
			}


		}	     
		printf("%lld\n",total);                      
		t--;
	}
}
