#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int vacation(int a[], int b[], int c[], int n)
{
    if(n==1)
        return max(a[0],max(b[0],c[0]));
    int as[n-1],bs[n-1],cs[n-1];
    as[0]=a[1]+max(b[0],c[0]);
    bs[0]=b[1]+max(a[0],c[0]);
    cs[0]=c[1]+max(a[0],b[0]);
    for(int i=1;i<n-1;i++)
    {
        as[i]=a[i+1]+max(bs[i-1],cs[i-1]);
        bs[i]=b[i+1]+max(as[i-1],cs[i-1]);
        cs[i]=c[i+1]+max(as[i-1],bs[i-1]);
    }
    return max(as[n-2],max(bs[n-2],cs[n-2]));
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i];
    cout<<vacation(a,b,c,n);
}
