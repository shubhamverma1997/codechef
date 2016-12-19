#include<iostream>
using namespace std;
int main()
{
    int t;
    char a[100001];
    cin>>t;
    cin.get();
    while(t>0)
    {
 
            cin>>a;
            if(a[0]=='\0')
                {cout<<"Yes"<<endl;t--;continue;}
            if(a[1]=='\0')
                {cout<<"Yes"<<endl;t--;continue;}
            int ftrend,trend1=a[0];
            int i=2;
            int flag=0;
            int trend2=a[1];
 
            if(trend1==trend2)
            {
                ftrend=trend1;
            }
            if(trend1!=trend2)
            {
                if(a[2]==trend1)
                    ftrend=trend1;
                else
                    ftrend=trend2;
                flag=1;
                i=3;
            }
 
 
        for(i;a[i]!='\0';i++)
        {
            if(ftrend==a[i])
                continue;
            if(ftrend!=a[i]&&flag==0)
                {
                    flag=1;
                    continue;
                }
            if(ftrend!=a[i]&&flag==1)
            {
                flag=2;
                cout<<"No"<<endl;
                break;
            }
 
        }
        if(flag==0)
            cout<<"No"<<endl;
        if(flag==1)
            cout<<"Yes"<<endl;
            t--;
 
    }
 
}
 
