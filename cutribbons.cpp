#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[n+1];
    memset(arr, -1, sizeof arr);
    arr[0]=0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]!=-1)
        {
         //   if(i+a<=n)
                arr[i+a]=max(arr[i+a], arr[i]+1);
            //if(i+b<=n)
                arr[i+b]=max(arr[i+b], arr[i]+1);
            //if(i+c<=n)
                arr[i+c]=max(arr[i+c], arr[i]+1);
        }
    }
    if(arr[n]==-1)
        cout<<"impossible";
    else cout<<arr[n];
}
