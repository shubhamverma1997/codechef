#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    long long int  s,v,a=2,b=3;
    double ans;
    cin>>t;
    while(t>0)
    {
        cin>>s;
        cin>>v;
        ans=double((2.0*s)/(3.0*v));
        cout<<setprecision(15)<<ans<<endl;
        t--;
    }
}
 
