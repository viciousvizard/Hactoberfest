#include<bits/stdc++.h>
using namespace std;
int stickler(int arr[], int n, int k)
{
    int inc[n-1],mnm=INT_MAX;
    inc[0]=abs(arr[0]-arr[1]);
    for(int i=1;i<n-1;i++)
    {
        mnm=INT_MAX;
        for(int j=max(i-k,0);j<i;j++)
        {
            if(i-k>=0){
            if((inc[j]+abs(arr[i+1]-arr[j+1]))<mnm)
            mnm=inc[j]+abs(arr[i+1]-arr[j+1]);}
            else
                mnm=abs(arr[i+1]-arr[0]);
        }
        inc[i]=mnm;
    }
    return(inc[n-2]);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
       cout<< stickler(arr,n,k);
    return 0;
}


