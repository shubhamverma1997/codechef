#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    long int n,v,u;
    long long int pt;
    pair<long long int,long int> p[50001],temp;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%ld",&n);
        vector< vector<int> > arr;
        arr.resize(n+1);
 
        p[0]=make_pair(0,0);
        for(register long int i=1;i<=n;i++)
            {
                scanf("%lld",&pt);
                p[i]=make_pair(pt,i);
            }
        //pair display
        /*for(int i=1;i<n+1;i++)
            {
                cout<<p[i].first<<" "<<p[i].second<<endl;
            }*/
            sort(p+1,p+n+1);
        //pair display
           /* for(int i=1;i<n+1;i++)
            {
                cout<<p[i].first<<" "<<p[i].second<<endl;
            }
            */
        for(register long int i=0;i<n-1;i++)
        {
            scanf("%ld",&v);
            scanf("%ld",&u);
            arr[v].push_back(u);
            arr[u].push_back(v);
        }
 
        for(register long int i=1;i<n+1;i++)
        {
            long int flag=0,in=0,counter=p[n].second;
            while(flag==0)
            {
                long int j=0;
                if(counter==i)
                {
                            in++;
                            if(in==n)
                            {
                                break;
                            }
                        counter=p[n-in].second;
 
                }
                else
                {
 
                        flag=1;
                        for(vector<int>::iterator it=arr[i].begin();it!=arr[i].end();it++)
                            {
 
                            if(counter==arr[i][j])
                            {
                                flag=0;
                                in++;
                                counter=p[n-in].second;
                                break;
                            }
                                j++;
                            }
                }
            }
            cout<<p[n-in].second<<" ";
        }
        printf("\n");
        t--;
 
    }
        //display
        /*for(int i=0;i<n-1;i++)
        {
            long int j=0;
            for(vector<int>::iterator it=arr[i].begin();it!=arr[i].end();it++)
                {
                    cout<<arr[i][j]<<" ";
                    j++;
                }
                cout<<endl;
        }*/
 
 
    }
