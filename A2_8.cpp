#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    cin>>t;
    cout<<"*"<<endl;
    for(i=2;i<t;i++)
    {
        cout<<"*";
        k=i-2;
        for(j=1;j<=k;j++)cout<<" ";
        cout<<"*"<<endl;
    }
    for(i=1;i<=t;i++)cout<<"*";
    cout<<endl;
    return 0;
}
