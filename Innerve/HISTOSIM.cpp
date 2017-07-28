#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,ca,cb,flag;
	int aa[26],ba[26];

	char a[1002],b[1002],pa,pb;
	cin>>t;
	while(t)
	{
		for(int i=0;i<26;i++)
		{
			aa[i]=0;
			ba[i]=0;
		}
		flag=1;
		ca=0;
		cb=0;
		cin>>a;
		cin>>b;
		pa=a[0];
		pb=b[0];
		aa[(int)(a[0])-97]=1;
			ba[(int)(b[0])-97]=1;
		for(int i=1;a[i]!='\0';i++)
		{
			aa[(int)(a[i])-97]=1;
			ba[(int)(b[i])-97]=1;
			if(pa==a[i])
			{
				//cout<<"here";
				if(pb==b[i])
					continue;
				else
				{
					flag=0;
					break;
				}
			}
			if(pb==b[i])
			{
				if(pa==a[i])
					continue;
				else
				{
					flag=0;
					break;
				}
			}
			if(pa!=a[i] && pb!=b[i])
			{
				pa=a[i];
				pb=b[i];
			}
		}
		int acount=0,bcount=0;
		for(int i=0;i<26;i++)
		{
			//cout<<aa[i]<<" "<<ba[i]<<endl;
			if(aa[i]==1)
				acount++;
			if(ba[i]==1)
				bcount++;

		}
		if(flag==1 && acount==bcount)
			cout<<"YES\n";
		else
			cout<<"NO\n";	
		t--;

	}
}