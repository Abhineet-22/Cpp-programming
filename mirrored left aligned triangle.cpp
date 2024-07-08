#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
main()
{
    int n,i,j;
    string ch;
    cout<<"Enter your character input : ";
    cin>>ch;
    cout<<"Enter your value input : ";
    cin>>n;

    for (i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    for (i=n;i>=0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
