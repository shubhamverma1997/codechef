#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
 
long long int length[1000000];
vector<pair<long long int ,long long int >> v;
pair<long long int ,long long int > temp;
 
int main()
{
    long long int n,l,r,counter=0;
    
    scanf("%lld",&n);
    scanf("%lld",&l);
    scanf("%lld",&r);
    for(register long long int i=0;i<n;i++)
        scanf("%lld",&length[i]);
	sort(length,length+n);
    //v.push_back(make_pair(10,10));
    //v.push_back(make_pair(10,9));
    long long int a,b;
    for(register long long int i=0;i<n-1;i++)
    {
        a=length[i+1]-length[i]+1;
        if(a<l)
            a=l;
        if(a>r)
            {
                continue;
            }
        b=length[i+1]+length[i]-1;
        if(b>r)
            b=r;
        if(b<l)
        {
            continue;
        }
        //cout<<length[i+1]<<" "<<length[i]<<endl;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    
    //cout<<endl;
    vector<pair<long long int ,long long int >>::iterator it;    
    
    long long int flag=0,lr=(*(v.begin())).first,ur=(*(v.begin())).second;
    counter+=ur-lr+1;
 
    //cout<<(*(v.begin())).first<<" "<<(*(v.begin())).second<<endl;
    //cout<<counter<<endl;
    for(it=v.begin();it!=v.end();it++)
    { 
        //cout<<(*it).first<<" "<<(*it).second<<endl;
        if(flag==0)
        {
            flag=1;
            continue;
        }
        if(ur<(*it).first)
        {
            lr=(*it).first;
            ur=(*it).second;
            counter+=ur-lr+1;
        }
        else if(lr== (*it).first&&ur<(*it).second)
        {
            counter+=(*it).second-ur;
            ur=(*it).second;
        }
        else if(lr<(*it).first && ur<(*it).second)
        {
            counter+=(*it).second-ur;
            ur=(*it).second;
        }
        else if((*it).first==ur)
        {
            counter+=(*it).second-ur;
            ur=(*it).second;
        }
    }
    cout<<counter<<endl;
} 
