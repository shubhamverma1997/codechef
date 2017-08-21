//Practice
#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int i,count;
	char str[100005],c;
	scanf("%d",&t);
	getchar();
	while(t)
	{
		i=0;
		count=0;
		c=getchar();
		while(c!='\n')
		{
			if(c=='<')
			{
				str[i]='>';
				i++;
			}
			else if(c=='>')
			{
				str[i]='<';
				i++;
			}
			c=getchar();
		}
		str[i]='\0';
		//cout<<str<<endl;
		int flag=0;
		// 1 >
		// 2 <
		for(register long long int j=0;j<i;j++)
		{
			if(flag==0 && str[j]=='>')
			{
				//cout<<"in";
				flag=1;
				continue;
			}
			if(flag==1 && str[j]=='<')
			{
				//cout<<"here";	
				flag=0;
				count++;
				continue;
			}

		}
		printf("%lld\n",count);
		t--;
	}
}