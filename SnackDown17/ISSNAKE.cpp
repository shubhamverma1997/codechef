#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int t,n;
	char a[1000],b[1000];
	scanf("%lld",&t);
	
	while(t)
	{
		cin>>n;
		cin>>a;
		cin>>b;
		//cout<<endl<<a<<b<<endl;
	
		int flaga=1,flagb=1,headfound=0,coldone=0;
		
		int row=1;
		
		//starting from upper row
		for(int i=0;i<n;)
		{
			//cout<<" here ";
			if(b[i]=='#'&& headfound==0&&a[i]!='#')
			{
				flaga=0;
				break;
			}
			if(headfound==2 && (a[i]=='#'||b[i]=='#'))
			{
				flaga=0;
				headfound=0;
				row=2;
				coldone=0;
				break;
			}
			if(a[i]=='#'&&headfound==0)
			{
				//cout<<"selected ";
				headfound=1;
				row=1;
				coldone=0;
			}
			if(headfound==1)
			{
				if(row==1)
				{
					if(b[i]=='#'&&coldone==0)
					{
						//cout<<"rowdown ";
						row=2;
						coldone=1;
						continue;
					}
					if(i!=n-1)
					{
						if(a[i+1]=='#')
						{
							//cout<<"rowupforward ";
							coldone=0;
							row=1;
							i++;
							continue;
						}
					}
					headfound=2;
					i++;
					//cout<<" ++ ";
					continue;
				}
				else if(row==2)
				{
					if(a[i]=='#'&&coldone==0)
					{
						//cout<<"rowup ";
						coldone=1;
						row=1;
						continue;
					}
					if(i!=n-1)
					{
						if(b[i+1]=='#')
						{
							//cout<<"rowdownforward ";
							coldone=0;
							i++;
							row=2;
							continue;
						}
					}
					headfound=2;
					i++;
					continue;
				}

			}
			i++;

		}
		
		if(headfound==0)
			flaga=0;
			//starting from b

		row=2;
		headfound=0;
		coldone=0;
		for(int i=0;i<n;)
		{

			//cout<<" /here/ ";
			if(a[i]=='#'&&headfound==0&&b[i]!='#')
			{
				flagb=0;
				break;
			}
			if(headfound==2 && (a[i]=='#'||b[i]=='#'))
			{
				flagb=0;
				break;
			}
			if(b[i]=='#'&&headfound==0)
			{
				//cout<<"/selected/ ";
				headfound=1;
				row=2;
				coldone=0;
			}
			if(headfound==1)
			{
				if(row==2)
				{
					if(a[i]=='#'&&coldone==0)
					{
						//cout<<"/rowup/ ";
						row=1;
						coldone=1;
						continue;
					}
					if(i!=n-1)
					{
						if(b[i+1]=='#')
						{
							//cout<<"/rowdownforward/ ";
							coldone=0;
							row=2;
							i++;
							continue;
						}
					}
					headfound=2;
					i++;
					//cout<<" /++/ ";
					continue;
				}
				else if(row==1)
				{
					if(b[i]=='#'&&coldone==0)
					{
						//cout<<"/rowdown/ ";
						coldone=1;
						row=2;
						continue;
					}
					if(i!=n-1)
					{
						if(a[i+1]=='#')
						{
							//cout<<"/rowupforward/ ";
							coldone=0;
							i++;
							row=1;
							continue;
						}
					}
					headfound=2;
					i++;
					continue;
				}

			}
			i++;

		}

		if(headfound==0)
			flagb=0;

		if(flaga==0 && flagb==0)
		{
			printf("no\n");
		}
		else
			printf("yes\n");

		t--;
	}
}
