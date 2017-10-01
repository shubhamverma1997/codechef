#include<iostream>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int t,n,cc,cs,ce,cem,cmh,cm,ch;
	char c[20];
	cin>>t;
	while(t--)
	{
		cc=0;
		cs=0;
		ce=0;
		cem=0;
		cmh=0;
		cm=0;
		ch=0;
		cin>>n;
		for(register long long int i=0;i<n;i++)
		{
			cin>>c;
			if(c[0]=='c')
			{
				cc++;
				continue;
			}
			else if(c[0]=='s')
			{
				cs++;
				continue;
			}
			else if(c[0]=='h')
			{
				ch++;
				continue;
			}
			else if(c[0]=='e' && c[4]=='-')
			{
				cem++;
				continue;
			}
			else if(c[0]=='e')
			{
				ce++;
				continue;
			}
			else if(c[0]=='m' && c[6]=='-')
			{
				cmh++;
			}
			else if(c[0]=='m')
			{
				cm++;
				continue;
			}
		}
		if(cc>0 && cs>0 && ce>0 && (cem>0||cm>0) && (cmh>0||ch>0))
			printf("Yes\n");
		else
			printf("No\n");
	}
}