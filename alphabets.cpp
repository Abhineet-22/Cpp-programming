#include<iostream>
#include<iomanip>

using namespace std;
main()
{
    int r,c;
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=5;c++) //loop for A
        {
            switch(r)
            {
            case 1:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==2 || c==4)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                cout<<"* ";
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for B
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for C
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for D
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1||c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==1||c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==1||c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
            for (c=1;c<=5;c++) //loop for E
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for H
        {
            switch(r)
            {
            case 1:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                cout<<"* ";
                break;
            case 4:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for I
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for N
        {
            switch(r)
            {
            case 1:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 2:
                if(c==1 || c==5 || c==2)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==1 || c==5 || c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;            case 4:
                if(c==1 || c==5 || c==4)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if(c==1 || c==5)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }

        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for E
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==5)
                {cout<<"  ";}
                else{cout<<"* ";}
                break;
            case 4:
                if(c==1)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                cout<<"* ";
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        for (c=1;c<=5;c++) //loop for T
        {
            switch(r)
            {
            case 1:
                cout<<"* ";
                break;
            case 2:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 3:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 4:
                if(c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            case 5:
                if (c==3)
                {cout<<"* ";}
                else{cout<<"  ";}
                break;
            }
        }
        for (c=1;c<=5;c++) //loop for spacing between letters
        {
            if (c==1)
            {cout<<"  ";}
        }
        cout<<endl;
    }
}
