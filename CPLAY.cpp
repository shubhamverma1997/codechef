#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	char c;
	int flag=1,g1,g2;
	char a[21];
	while(c!=EOF)
	{
	    //cout<<"here";
		g1=0;
		g2=0;
		//printf("flag %d \n",flag);
		for(int i=0;i<20;i++)
		{
			a[i]=getchar();
			if(a[i]==EOF)
			break;
		}
		if(a[0]==EOF)
		break;
		//cout<<"now";
		int winflag=0,cl1,cl2,wint=0;
		for(int i=0;i<10;i+=2)
		{
			//cout<<"in"<<i<<"\n";
			
			if(a[i]=='1')
			g1++;
			
			cl1=5-(i/2)-1;
			cl2=5-(i/2);
			
			if(g1>g2 && cl2<g1-g2)
			{
				//cout<<"Win"<<g1<<" "<<g2<<" "<<cl2<<"\n";
				//Team A won
				winflag=i+1;
				wint=1;
				break;
				
			}
			else if(g2>g1 && cl1<g2-g1)
			{
				winflag=i+1;
				wint=2;
				break;
			}
			
			//second kick
			if(a[i+1]=='1')
			g2++;
			cl1=5-(i/2)-1;
			cl2=5-(i/2)-1;
			if(g2>g1 && cl1<g2-g1)
			{
				winflag=i+2;
				wint=2;
				break;
			}
			else if(g1>g2 && cl2<g1-g2)
			{
				winflag=i+2;
				wint=1;
				break;
			}
		}
		
		if(wint!=0)
		{
			//cout<<"here";
			if(wint==1)
			printf("TEAM-A %d\n",winflag);
			else if(wint==2)
			printf("TEAM-B %d\n",winflag);
			c=getchar();
			if(c==EOF)
			break;
			//printf("True");
			continue;
			
		}
		g1=0;
		g2=0;
		for(register int i=10;i<20;i+=2)
		{
			if(a[i]=='1')
			g1++;
			if(a[i+1]=='1')
			g2++;
			if(g1>g2)
			{
				printf("TEAM-A %d\n",i+2);
				break;
			}
			else if(g2>g1)
			{
				printf("TEAM-B %d\n",i+2);
				break;
			}
		}
		if(g1==g2)
		printf("TIE\n");
		//for(int i=0;i<20;i++)
		//{
		//	cout<<a[i]<<" ";
		//}
		//cout<<"\n";
		
		c=getchar();
		if(c==EOF)
		break;
		//cout<<"-->"<<c;
	}
	//printf("Success");
} 