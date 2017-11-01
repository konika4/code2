#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,colum,i,j;
    cin>>row>>colum;
    row=row-2;
    for(i=1;i<=colum;i++)cout<<"*";
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colum;j++)
        {
            if(j==1||j==colum)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=colum;i++)cout<<"*";
    cout<<endl;
    return 0;
}
