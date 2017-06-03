#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n;
	char first[100001],second[100001];
	cin>>t;
	while(t)
	{
		long long int fc=0;
		cin>>n;

		for(register long long int i=0;i<n;i++)
			cin>>first[i];
		for(register long long int i=0;i<n;i++)
			cin>>second[i];
		//cout<<endl;
		//cout<<first<<endl;
		//cout<<second<<endl;
		//cout<<endl;

		int f=0,s=0;
		for(register long long int i=0;i<n;i++)
		{
			if(first[i]=='*')
			{
				f=1;
			}
			if(second[i]=='*')
			{
				s=1;
			}
			if(f==1&&s==1)
			{
				//cout<<"in "<<i<<" "<<endl;
				fc++;
				break;
			}
		}

		f=0;s=0;
		//f=0 no star found
		//f=1 one isolated star found
		//f=2 collision
		int foundf=0,founds=0;
		for(register long long int i=0;i<n;i++)
		{
			foundf=0;
			founds=0;
			if(first[i]=='*' && f==0 )
			{
				f=1;
				first[i]='.';
				foundf=1;
			}
			if(s==0 && second[i]=='*')
			{
				s=1;
				second[i]='.';
				founds=1;
			}
			if(f==1 && first[i]=='*')
			{
				f=2;
			}
			if(s==1 && second[i]=='*')
			{
				s=2;
			}
			if(f==2&&s==2)
			{
				//cout<<"here-22- "<<i<<endl;
				f=1;
				s=1;
				fc++;
				continue;
			}
			if(f==2)
			{
				//cout<<"here-21- "<<i<<endl;
				if(founds==0)
					s=0;
				f=1;
				fc++;
				continue;
			}
			if(s==2)
			{
				//cout<<"here-12- "<<i<<endl;
				if(foundf==0)
					f=0;
				s=1;
				fc++;
				continue;
			}
	
		}

		printf("%lld\n",fc );
		t--;
	}

}
