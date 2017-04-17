#include<iostream>
using namespace std;
bool arr[100002];
int main(int argc, char const *argv[]) {
  long long int t,n,k,p,temp,flag,uniflag;
  scanf("%lld",&t );
  while (t)
  {
    uniflag=0;
    scanf("%lld",&n);
    scanf("%lld",&k);
 
    for(register long long int i=0;i<n;i++)
    {
      scanf("%lld",&p);
      flag=0;
      for(register long long int j=0;j<p;j++)
      {
        scanf("%lld",&temp);
        if(!arr[temp])
        {
          arr[temp]=true;
          flag=1;
        }
      }
      if (flag==0)
      {
        //this means this island neet not to be included
        //some case
        uniflag=1;
      }
    }
 
    for(register long long int i=1;i<=k;i++)
    {
      if(!arr[i])
      {
        //sad case
        uniflag=2;
      }
      arr[i]=false;
    }
 
 
    if (uniflag==1)
    {
        printf("some\n");
    }
    else if(uniflag==2)
    {
      printf("sad\n");
    }
    else
    {
      printf("all\n");
    }
    t--;
  }
  return 0;
}
