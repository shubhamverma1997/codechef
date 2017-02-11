#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,m,pre[26];
    char arr[1000][1000];
    scanf("%d",&t);
    pre['W'-'A']=2;
    pre['A'-'A']=1;
    pre['B'-'A']=3;
    while(t>0)
    {
        scanf("%d",&n);
        scanf("%d",&m);
 
        for(register int i=0;i<n;i++)
        {
 
                scanf("%s",&arr[i]);
        }
        /*
        for(register int i=0;i<n;i++)
        {
                printf("%s\n",arr[i]);
        }     
        cout<<endl;   */
        
 
 
        int flagcheck=1,precr;
        for(register int i=0;i<n;i++)
        {
            flagcheck=1;
            if(arr[i][0]=='W'||arr[i][m-1]=='W')
            {
                //cout<<"Waterout"<<endl;
                flagcheck=0;
                break;
            }
            precr=pre[arr[i][0]-'A'];
            for(register int j=0;j<m;j++)
            {
                if(precr==3&&(arr[i][j]=='W'||arr[i][j]=='A'))
                {
                    precr=pre[arr[i][j]-'A'];   
                    continue;
                }
                if(precr==3)
                {
                    precr=pre[arr[i][j]-'A'];
                    continue;
                }
                if(precr!=pre[arr[i][j]-'A']&&arr[i][j]!='B')
                {
                    //cout<<precr<<" "<<arr[i][j]<<endl;
                    //cout<<"rowout"<<endl;
                    flagcheck=0;
                    break;
                }
                precr=pre[arr[i][j]-'A'];
            }
            if(flagcheck==0)
            {
                break;
            }
        }
        if(flagcheck==0)
        {
            printf("no\n");
            t--;
            continue;
        }
        
 
 
 
        int flagcheckc=1,precc;
        for(register int i=0;i<m;i++)
        {
            flagcheck=1;
            precc=pre[arr[0][i]-'A'];
            for(register int j=0;j<n;j++)
            {
                if(precc>pre[arr[j][i]-'A'])
                {
                    //cout<<"columnout"<<endl;
                    flagcheckc=0;
                    break;
                }
                precc=pre[arr[j][i]-'A'];
            }
            if(flagcheckc==0)
            {
                break;
            }
        }
        if(flagcheckc==0||flagcheck==0)
        {
            printf("no\n");
            t--;
            continue;
        }        
        else
            printf("yes\n");
        t--;
    }
}
