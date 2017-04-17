#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
  long long int t;
 
  string temp;
  scanf("%lld",&t);
  while(t)
  {
    vector<string> str1,str2;
    for(int i=0;i<4;i++)
    {
      cin>>temp;
      str1.push_back(temp);
    }
    for(int i=0;i<4;i++)
    {
      cin>>temp;
      str2.push_back(temp);
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    vector<string>::iterator it;
    /*for(it=str1.begin();it!=str1.end();it++)
    {
      cout<<*it<<" ";
    }
    cout<<endl;
    for(it=str2.begin();it!=str2.end();it++)
    {
      cout<<*it<<" ";
    }*/
    int counter=0;
    for(it=str1.begin();it!=str1.end();it++)
    {
      if(binary_search(str2.begin(),str2.end(),*it))
        {
          counter++;
        }
    }
    if(counter>=2)
    {
      cout<<"similar"<<endl;
    }
    else
      cout<<"dissimilar"<<endl;
    t--;
  }
}
