#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
void LA_triangle(int a, char b){
    int i,j;
    for (i=0;i<=a;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}

void RA_triangle(int a,char b){
    int i,j,k,m;
    m=a;
    for (i=0;i<=a;i++)
    {
        for(j=m;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<b;
        }
        m--;
        cout<<endl;
    }
}

void MLA_triangle(int a, char b){
    int i,j;
    for (i=0;i<=a;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
    for (i=a;i>=0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
void MRA_triangle(int a, char b){
    int c1,i,j,k,m,i1,j1,x;
    m=a;
    for (i=0;i<=a;i++)
    {
        for(j=m;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<b;
        }
        m--;
        cout<<endl;
    }
    x = a;
    for (i1=0;i1<=a;i1++)
    {
        for(c1=0;c1<i1;c1++)
        {
            cout<<" ";
        }
        for(j1=x;j1>0;j1--)
        {
            cout<<b;
        }
        x--;
        cout<<endl;
    }
}

void Pyramid(int a, char b)
{
    int i,j,k,m;
    m=a;
    for (i=0;i<=a;i++)
    {
        for(j=m;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<b<<" ";
        }
        m--;
        cout<<endl;
    }
}

void M_pyramid(int a, char b)
{
    int i,j,k,m,x,i1,b1,c1;
    m=a;
    for (i=0;i<=a;i++)
    {
        for(j=m;j>0;j--)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<b<<" ";
        }
        m--;
        cout<<endl;
    }
    x = a;
    for (i1=0;i1<=a;i1++)
    {
        for(c1=0;c1<i1;c1++)
        {
            cout<<" ";
        }
        for(b1=x;b1>0;b1--)
        {
            cout<<b<<" ";
        }
        x--;
        cout<<endl;
    }
}
main()
{
    int choice = 0;
    do{
        cout<<"1. LEFT ALIGNED TRIANGLE"<<endl;
        cout<<"2. RIGHT ALIGNED TRIANGLE"<<endl;
        cout<<"3. MIRRORED LEFT ALIGNED TRIANGLE"<<endl;
        cout<<"4. MIRRORED RIGHT ALIGNED TRIANGLE"<<endl;
        cout<<"5. PYRAMID"<<endl;
        cout<<"6. MIRRORED PYRAMID"<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"Please enter your choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            LA_triangle(n,c);
            cout<<endl;
            break;
            }

        case 2:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            RA_triangle(n,c);
            cout<<endl;
            break;
            }

        case 3:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            MLA_triangle(n,c);
            cout<<endl;
            break;
            }

        case 4:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            MRA_triangle(n,c);
            cout<<endl;
            break;
            }

        case 5:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            Pyramid(n,c);
            cout<<endl;
            break;
            }

        case 6:
            {
            int n; char c;
            cout<<"Enter a character of your choice : ";
            cin>>c;
            cout<<"Enter height value : ";
            cin>>n;
            M_pyramid(n,c);
            cout<<endl;
            break;
            }

        case 0:
            cout<<"Thankyou for using my program"<<endl;
        }
    }while(choice!=0);
}
