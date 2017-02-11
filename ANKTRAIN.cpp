#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int temp,temp2;
        temp=n%64;
        temp2=temp%8;
        if(temp2==0)
            cout<<n-1<<"SL"<<endl;
        else if(temp2==1)
            cout<<n+3<<"LB"<<endl;
        else if(temp2==2)
            cout<<n+3<<"MB"<<endl;
        else if(temp2==3)
            cout<<n+3<<"UB"<<endl;
        else if(temp2==4)
            cout<<n-3<<"LB"<<endl;
        else if(temp2==5)
            cout<<n-3<<"MB"<<endl;
        else if(temp2==6)
            cout<<n-3<<"UB"<<endl;
        else if(temp2==7)
            cout<<n+1<<"SU"<<endl;
        t--;
    }
}
 
