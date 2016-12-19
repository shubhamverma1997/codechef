#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t;
    long long int n;
    long long int counter,temp;
    long long int sq,holder;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld",&n);
        if(n<5000)
        {
               if(n==1)
            {
                printf("INFINITY\n");
                t--;
                continue;
            }
        counter=0;
        for(register long int i=2;i*i<=n;i++)
        {
            temp=n;
            while(temp>=i)
            {
                temp=temp/i;
            }
            if(temp==1)
            {
                counter++;
                //cout<<"--|"<<i<<"|--";
            }
 
        }
        counter=counter+(n-(n/2));
        printf("%lld\n",counter);
        t--;
        continue;
        }
 
        counter=0;
        for(register long long  int i=2;i*i*i*i*i<=n;i++)
        {
            temp=n;
            while(temp>=i)
            {
                temp=temp/i;
            }
            if(temp==1)
            {
                counter++;
               // cout<<"--|"<<i<<"|--";
            }
 
        }
 
        for(long long int i=sqrt(sqrt(n))/sqrt(sqrt(2));i*i*i*i<=n;i++)
        {
            temp=n;
            while(temp>=i)
            {
                temp=temp/i;
            }
            if(temp==1)
            {
                counter=counter+(long long int)sqrt(sqrt(n))-i+1;
                break;
            }
        }
 
        for(long long int i=cbrt(n)/cbrt(2);i*i*i<=n;i++)
        {
            temp=n;
            while(temp>=i)
            {
                temp=temp/i;
            }
            if(temp==1)
            {
                counter=counter+(long long int)cbrt(n)-i+1;
                break;
            }
        }
       // cout<<counter<<endl;
        //cout<<sq;
       // cout<<"here";
        for(long long int i=sqrt(n)/sqrt(2);i*i<=n;i++)
        {
            temp=n;
            while(temp>=i)
            {
                temp=temp/i;
            }
            if(temp==1)
            {
                counter=counter+(long long int)sqrt(n)-i+1;
                break;
            }
        }
        counter=counter+(n-(n/2));
        printf("%lld\n",counter);
        t--;
    }
}
 
