#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=(t-i);j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<"*";
        cout<<endl;
    }
    t=t-1;
    for(int i=t,k=1;i>=1;i--,k++)
    {
        for(int j=1;j<=k;j++)cout<<" ";
        for(int j=1;j<=(2*i-1);j++)cout<<"*";
        cout<<endl;
    }
    return 0;
}



