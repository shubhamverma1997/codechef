#include<iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t!=0)
    {
        cin>>k;
        int arr[k];
        int a=k/2+1,i=0;
        while(a>0)
        {
            arr[i]=a;
            a--;
            i++;
        }
        a=k/2+2;
        while(a<=k)
        {
 
            arr[i]=a;
            a++;
            i++;
        }
        for(int j=0;j<k;j++)
        {
        for(int i=j;i<k;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int n=0;n<j;n++)
            cout<<arr[n]<<" ";
            cout<<endl;
        }
 
        t--;
    }
}
 
