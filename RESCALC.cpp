#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
 
        /*if(n==1||n==0)
        {
            cout<<"chef"<<endl;
            t--;
            continue;
        }
        */
        int players[1000],i=0,maxscore=0,msi=0,j=0;
 
        for(i=0;i<n;i++)
        {
            cin>>players[i];
            int cookies[1000];
            int typearray[6]={0,0,0,0,0,0};
            for(j=0;j<players[i];j++)
            {
                //cout<<"here picking cookies";
                cin>>cookies[j];
                typearray[cookies[j]-1]++;
            }
            /*
            cout<<endl;
            for(int h=0;h<6;h++)
                cout<<typearray[h];
            cout<<endl;
            */
            int score=players[i],lowest4=0,lowest5=0,lowest6=0;
            //cout<<"score"<<score<<endl;
            int zerocount=0;
            for(int k=0;k<6;k++)
            {
                if(typearray[k]==0)
                    zerocount++;
            }
            if(zerocount==0)
            {
            //cout<<"in here 6";
                lowest6=typearray[0];
                for(int k=0;k<6;k++)
                {
                    if(lowest6>typearray[k])
                        lowest6=typearray[k];
                }
                score=score+4*lowest6;
                for(int k=0;k<6;k++)
                {
                    if(typearray[k]-lowest6)
                        typearray[k]=typearray[k]-lowest6;
                    else
                        typearray[k]=0;
                }
                zerocount=0;
                for(int k=0;k<6;k++)
            {
                if(typearray[k]==0)
                zerocount++;
            }
            }
            /*
            cout<<endl;
            for(int h=0;h<6;h++)
                cout<<typearray[h];
            cout<<endl;
            */
 
 
            if(zerocount==1)
            {
             //cout<<"in here 5";
                lowest5=1000;
                for(int k=0;k<6;k++)
                {
                    if(typearray[k]!=0&&lowest5>typearray[k])
                        lowest5=typearray[k];
                }
                score=score+2*lowest5;
                for(int k=0;k<6;k++)
                {
                    if(typearray[k]-lowest5>=0)
                        typearray[k]=typearray[k]-lowest5;
                    else
                        typearray[k]=0;
                }
                zerocount=0;
                for(int k=0;k<6;k++)
            {
                if(typearray[k]==0)
                zerocount++;
            }
            }
            /*
            cout<<endl;
            for(int h=0;h<6;h++)
                cout<<typearray[h];
            cout<<endl;
            */
            if(zerocount==2)
            {
                //cout<<"in here 4";
                lowest4=10000;
                for(int k=0;k<6;k++)
                {
                    if(typearray[k]!=0&&lowest4>typearray[k])
                        lowest4=typearray[k];
                }
                score=score+lowest4;
                for(int k=0;k<6;k++)
                {
                    if(typearray[k]-lowest4>=0)
                        typearray[k]=typearray[k]-lowest4;
                    else
                        typearray[k]=0;
                }
            }
            /*cout<<endl;
            for(int h=0;h<6;h++)
                cout<<typearray[h];
            cout<<endl;
            cout<<score<<endl;
            cout<<"out of scoring "<<score;
            */
            if(i==0)
            {
                maxscore=score;
                msi=0;
                continue;
            }
            if(score>maxscore)
                {
                    maxscore=score;
                    msi=i;
                    continue;
                }
            if(maxscore==score)
            {
                msi=-1;
                continue;
            }
        }
 
        if(msi==-1)
           {
               cout<<"tie"<<endl;
               t--;
                continue;
           }
        if(msi==0)
            {
                cout<<"chef"<<endl;
                t--;
                continue;
            }
        if(msi>0)
        {
            cout<<msi+1<<endl;
            t--;
            continue;
        }
    }
}
 
