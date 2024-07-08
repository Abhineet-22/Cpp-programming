#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
main()
{
    int n,i,j,k,m;
    string ch;
    cout<<"Enter your character input : ";
    cin>>ch;
    cout<<"Enter your value input : ";
    cin>>n;
    m=n;
    for (i=0;i<=n;i++)
    {
        for(j=m;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<ch<<" ";
        }
        m--;
        cout<<endl;
    }

}
