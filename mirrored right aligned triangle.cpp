#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
main()
{
    int n,i,j,k,m,a,b,c,x;
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
            cout<<ch;
        }
        m--;
        cout<<endl;
    }
    x = n;
    for (a=0;a<=n;a++)
    {
        for(c=0;c<a;c++)
        {
            cout<<" ";
        }
        for(b=x;b>0;b--)
        {
            cout<<ch;
        }
        x--;
        cout<<endl;
    }

}
