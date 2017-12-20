#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	int t,n,m,c1,c2,f1,f2;
	char a;
	cin>>t;
	unordered_map<char,int> um;
	um['G']=1;
	um['R']=0;
	while(t--)
	{
		cin>>n;
		cin>>m;
		//0 for R
		//1 for G
		f1=0;
		f2=1;
		c1=0;
		c2=0;
		int temp1,temp2;
		temp1=0;
		temp2=1;
		for(register int i=0;i<n;i++)
		{

			for(register int j=0;j<m;j++)
			{
				cin>>a;
				if(f1!=um[a])
				{	
					if(f1==1)
						c1+=5;
					else
						c1+=3;
				}
				if(f2!=um[a])
				{	
					if(f2==1)
						c2+=5;
					else
						c2+=3;
				}
				f1=1-f1;
				f2=1-f2;
			}
			temp1=1-temp1;
			temp2=1-temp2;
			f1=temp1;
			f2=temp2;
		}
		//cout<<c1<<"\n"<<c2<<"\n";
		cout<<min(c1,c2)<<"\n";
	}
}