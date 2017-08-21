//PALINGAM
//Rules
/*
Conditions for abswer A
	(i) If string s ha a character multiple times and t
	 	doesn't have it.
	(ii) If s has a character single time and t is made up
		only of that character and also the string length
		is greater than 1.
	(iii) If all the characters of t are present in s and
		  a single letter in s is not present in t .
*/
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	int t,sa[26],sb[26],c1,c2,decoy,bap,flag;
	string a,b;
	scanf("%d",&t);
	while(t)
	{
		c1=0;
		c2=0;
		decoy=0;
		bap=1;
		
		flag=0;
		memset(sa,0,26*sizeof(int));
		memset(sb,0,26*sizeof(int));

		cin>>a;
		cin>>b;
		//cout<<a.length()<<endl;
		for(register int i=0;i<a.length();i++)
		{	
			sa[a[i]-'a']++;
			sb[b[i]-'a']++;
		}
		for(register int i=0;i<26;i++)
		{
			//cout<<"here";
			if(sa[i]==1 && sb[i]==0)
				decoy=1;
			if(sa[i]>1 && sb[i]==0)
			{
				flag=1;
				break;
			}
			if(sa[i]==1 && sb[i]==a.length() && sb[i]!=1)
			{
				flag=1;
				break;
			}
			if(sb[i]>=1)
			{
				if(sa[i]>=1)
				{

				}
				else
				{
					bap=0;
				}
			}

			
		}

		if(flag==1 || (decoy==1 && bap==1))
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
		t--;
	}
}