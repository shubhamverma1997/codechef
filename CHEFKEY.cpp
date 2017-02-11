#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n,m,c,i,num,rem,counter;
        counter=0;
        cin>>n;
        cin>>m;
        cin>>c;
        for(i=1;i<=n;i++)
        {
            num=c/i;
            rem=c%i;
            if(rem==0&&num<=m)
            counter++;
            else
            {
                if((num+1)*i==c&&num+1<=m)
                    {
                        counter++;
                        continue;
                    }
                if((num-1)*i==c&&num-1<=m)
                    {
                            counter++;
                            continue;
                    }
 
            }
        }
        cout<<counter<<endl;
        t--;
    }
}
