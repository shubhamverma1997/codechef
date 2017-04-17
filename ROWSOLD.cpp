#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  long long int t,counter,temp,consecutive1,consecutive0,incount,switcher;
  char s[100001];
  scanf("%lld",&t);
  while(t)
  {
    consecutive1=0;
    consecutive0=0;
    counter=0;
    scanf("%s",s);
    switcher=1;
    long long int index;
    for(register long long int j=0;s[j]!='\0';j++)
    {
      if(s[j]=='1')
          {
            index=j;
            break;
          }
    }
    //switcher is used to count the current number we are counting
    long long int i;
    for(i=index;s[i]!='\0';i++)
    {
      if(s[i]=='1'&&switcher==1)
      {
        consecutive1++;
      }
      if(s[i]=='0'&&switcher==0)
      {
        consecutive0++;
      }
      if(s[i]=='0'&&switcher==1)
      {
        consecutive0=1;
        switcher=0;
      }
      if(switcher==0 &&s[i]=='1')
      {
        counter+=consecutive1+consecutive0*consecutive1;
        consecutive0=0;
        consecutive1++;
        switcher=1;
      }
    }
    if(s[i-1]=='0')
        counter+=consecutive1+consecutive0*consecutive1;
    printf("%lld\n",counter);
    t--;
  }
}
