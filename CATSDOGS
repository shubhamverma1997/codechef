#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int c,d,l,t,minimum;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld",&c);
        scanf("%lld",&d);
        scanf("%lld",&l);
        if(2*d<=c)
            minimum=d*4+(c-2*d)*4;
        else if(2*d>c)
            minimum=d*4;
 
 
        if(minimum<=l&&l<=(d*4+c*4)&&l%4==0)
            printf("yes\n");
        else
            printf("no\n");
        t--;
    }
}
 
