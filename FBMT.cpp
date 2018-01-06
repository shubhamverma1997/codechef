#include<iostream>
using namespace std;
int main()
{
	long long int t,n;
	string s1,s2,s;
	long long int t1,t2,flag=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		flag=0;
		t1=0;
		t2=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>s;
			if(flag==0)
			{
				flag=1;
				s1=s;
				t1++;
				continue;
			}
			if(flag==1 && s!=s1)
			{
				flag=2;
				s2=s;
				t2++;
				continue;
			}
			if(s==s1)
				t1++;
			else
				t2++;
		}
		if(t1>t2)
			cout<<s1<<"\n";
		else if(t2>t1)
			cout<<s2<<"\n";
		else
			cout<<"Draw\n";
	}

}