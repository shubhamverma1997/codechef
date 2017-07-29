#include<iostream>
#include<algorithm>
using namespace std;
long long int a[100005];
int flag;
void input(long long int i)
{
	long long int num=0;
	char c;
	c=getchar();
	//printf("%c\n",c);
	while(c!=' ')
	{
		//printf("%c ",c);
		if(c=='\n')
		{
			flag=1;
			a[i]=num;
			return;
		}
		num=num*10+(c-'0');
		//cout<<num<<"|";
		c=getchar();

	}
	//cout<<num<<" ";
	a[i]=num;
}
int main()
{
	long long int t,n,temp,i,ans;
	scanf("%lld",&t);
	getchar();
	while(t)
	{
		
		i=0;

		while(1)
		{
			flag=0;
			input(i);
			if(flag==1)
				break;
			i++;

		}
		i++;

		sort(a,a+i);
		
		//for(register long long int j=0;j<i;j++)
			//cout<<a[j]<<" ";

		if(a[i-1]==i-1)
		{
			ans=a[i-2];
		}
		else
		{
			ans=a[i-1];
		}
		printf("%lld\n",ans);
		t--;
	}

}