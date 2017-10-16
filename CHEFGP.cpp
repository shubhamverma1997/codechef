#include<iostream>
using namespace std;
int main()
{
	long long int t,x,y,cnta,cntb,ga,gb;
	char s[100005];
	cin>>t;
	while(t--)
	{
		cnta=0;
		cntb=0;

		cin>>s;
		cin>>x;
		cin>>y;
		for(register long long int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='a')
				cnta++;
			else if(s[i]=='b')
				cntb++;
		}
		if(cnta%x==0)
			ga=cnta/x;
		else
			ga=cnta/x+1;
		if(cntb%y==0)
			gb=cntb/y;
		else
			gb=cntb/y+1;
		
		if(ga>gb)
		{
			while(ga!=gb)
			{
				if(cnta==0)
					break;
				if(cntb==0)
					break;
				for(register int i=0;i<x;i++)
				{
					if(cnta==0)
						break;
					printf("a");
					cnta--;
				}
				if(cntb!=0)
				{
					printf("b");
					cntb--;
				}
				if(cnta==0)
					break;
				if(cnta%x==0)
				{
					ga=cnta/x;
				}
				else
				{
					ga=cnta/x+1;
				}

				if(cntb==0)
					break;
				if(cntb%y==0)
				{
					gb=cntb/y;
				}
				else
				{
					gb=cntb/y+1;
				}
			}
			while(cnta>0 && cntb>0)
			{
				for(register long long int i=0;i<x;i++)
				{
					if(cnta==0)
						break;
					cnta--;
					printf("a");
				}
				for(register long long int i=0;i<y;i++)
				{
					if(cntb==0)
						break;
					cntb--;
					printf("b");
				}
			}

			while(cnta>0)
			{
					for(register long long int i=0;i<x;i++)
					{
						if(cnta==0)
							break;
						cnta--;
						printf("a");
					}
					if(cnta!=0)
						printf("*");
			}
			while(cntb>0)
			{
				for(register long long int i=0;i<y;i++)
				{
					if(cntb==0)
						break;
					cntb--;
					printf("b");
				}
				if(cntb!=0)
					printf("*");
			}
		}
		else if(gb>=ga)
		{
			while(ga!=gb)
			{
				if(cnta==0)
					break;
				if(cntb==0)
					break;
				for(register int i=0;i<y;i++)
				{
					if(cntb==0)
						break;
					printf("b");
					cntb--;
				}
				if(cnta!=0)
				{
					printf("a");
					cnta--;
				}
				if(cnta==0)
					break;
				if(cnta%x==0)
				{
					ga=cnta/x;
				}
				else
				{
					ga=cnta/x+1;
				}

				if(cntb==0)
					break;
				if(cntb%y==0)
				{
					gb=cntb/y;
				}
				else
				{
					gb=cntb/y+1;
				}
			}

			while(cnta!=0 && cntb!=0)
			{
				for(register long long int i=0;i<y;i++)
				{
					if(cntb==0)
						break;
					cntb--;
					printf("b");
				}
				for(register long long int i=0;i<x;i++)
				{
					if(cnta==0)
						break;
					cnta--;
					printf("a");
				}

			}
			
			while(cntb>0)
			{
				for(register long long int i=0;i<y;i++)
				{
					if(cntb==0)
						break;
					cntb--;
					printf("b");
				}
				if(cntb!=0)
					printf("*");
			}

			while(cnta>0)
			{
					for(register long long int i=0;i<x;i++)
					{
						if(cnta==0)
							break;
						cnta--;
						printf("a");
					}
					if(cnta!=0)
						printf("*");
			}

		}
		printf("\n");
	}

}