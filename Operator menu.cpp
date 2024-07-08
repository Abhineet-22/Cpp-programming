#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int choice,choice2,choice3,choice4,choice5,choice6,choice7;
do{
    label:
        cout<<"1. ARITHEMETIC OPERATORS"<<endl;
        cout<<"2. RELATIONAL OPERATORS"<<endl;
        cout<<"3. LOGICAL OPERATORS"<<endl;
        cout<<"4. ASSIGNMENT OPERATORS"<<endl;
        cout<<"5. BITWISE OPERATORS"<<endl;
        cout<<"6. INCREMENT & DECREMENT OPERATORS"<<endl;
        cout<<"7. TERNARY OPERATORS"<<endl;
        cout<<"8. INSERTION & EXTRACTION OPERATORS"<<endl;
        cout<<"9. SCOPE RESOLUTION OPERATORS"<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"Please enter your choice : ";
        cin>>choice;

    switch(choice)
    {
        do{
        case 1:
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Modulo"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Please enter your choice : "<<endl;
        cin>>choice2;
        switch(choice2)
        {
            case 0:
                cout<<"RETURNING TO MAIN MENU"<<endl;
                goto label;
                break;

            case 1:
                float o1,o2,res;
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1+ o2;
                cout<<"The result of your operation is : "<<res<<endl;
                break;

            case 2:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1- o2;
                cout<<"The result of your operation is : "<<res<<endl;
                break;

            case 3:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1* o2;
                cout<<"The result of your operation is : "<<res<<endl;
                break;

            case 4:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1/ o2;
                cout<<"The result of your operation is : "<<res<<endl;
                break;

            case 5:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = (int)o1% (int)o2;
                cout<<"The result of your operation is : "<<res<<endl;
                break;
        }} while(choice2!=0);

        do{
        case 2:
            cout<<"1. Less Than"<<endl;
            cout<<"2. Greater Than"<<endl;
            cout<<"3. Less Than or Equal to"<<endl;
            cout<<"4. Greater Than or Equal to"<<endl;
            cout<<"5. Equal to"<<endl;
            cout<<"6. Not equal to"<<endl;
            cout<<"0. Exit"<<endl;
            cout<<"Please enter your choice : ";
            cin>>choice3;
            switch(choice3)
            {
                float o1,o2,res;
                case 0:
                cout<<"RETURNING TO MAIN MENU"<<endl;
                goto label;
                break;

                case 1:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1< o2;
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

                case 2:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1> o2;
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

                case 3:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1<= o2;
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

                case 4:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = o1>= o2;
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

                case 5:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = (o1==o2);
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

                case 6:
                cout<<"Enter the value of 1st operand : ";
                cin>>o1;
                cout<<"Enter the value of 2nd operand : ";
                cin>>o2;
                res = (o1!= o2);
                if ((int)res==0)
                    {cout<<"The result of your operation is : "<<"False"<<endl;}
                if ((int)res!=0)
                    {cout<<"The result of your operation is : "<<"True"<<endl;}
                break;

            }}while(choice3!=0);

    do{
    case 3:
        cout<<"1. AND operator"<<endl;
        cout<<"2. OR operator"<<endl;
        cout<<"3. NOT operator"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Please enter your choice : ";
        cin>>choice4;
        switch(choice4)
        {float o1,o2,res;
                case 1:
                    cout<<"Enter the value of 1st operand : ";
                    cin>>o1;
                    cout<<"Enter the value of 2nd operand : ";
                    cin>>o2;
                    res = (o1&&o2);
                    if ((int)res==0)
                        {cout<<"The result of your operation is : "<<"False"<<endl;}
                    if ((int)res!=0)
                        {cout<<"The result of your operation is : "<<"True"<<endl;}
                    break;

                case 2:
                    cout<<"Enter the value of 1st operand : ";
                    cin>>o1;
                    cout<<"Enter the value of 2nd operand : ";
                    cin>>o2;
                    res = (o1||o2);
                    if ((int)res==0)
                        {cout<<"The result of your operation is : "<<"False"<<endl;}
                    if ((int)res!=0)
                        {cout<<"The result of your operation is : "<<"True"<<endl;}
                    break;

                case 3:
                    cout<<"Enter the value of operand : ";
                    cin>>o1;
                    res = (!o1);
                    if ((int)res==0)
                        {cout<<"The result of your operation is : "<<"False"<<endl;}
                    if ((int)res!=0)
                        {cout<<"The result of your operation is : "<<"True"<<endl;}
                    break;

                case 0:
                    cout<<"RETURNING TO MAIN MENU"<<endl;
                    goto label;
                    break;
                    }
    }while(choice4!=0);

    do{
    case 4:
        float n,res;
        cout<<"Enter the value of operand : ";
        cin>>n;
        res = n;
        cout<<"The value entered above has been assigned to res = "<<res<<endl;
        cout<<"Want to
        break;
        while(choic!=0);}

    do{
    case 5:
        int choice5;
        cout<<"1. BITWISE AND"<<endl;
        cout<<"2. BITWISE OR"<<endl;
        cout<<"3. BITWISE XOR"<<endl;
        cout<<"4. BITWISE Left Shift"<<endl;
        cout<<"5. BITWISE Right Shift"<<endl;
        cout<<"6. BITWISE Complement"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Please enter your choice : ";
        cin>>choice5;
        switch(choice5)
        { int o1,o2,res;
        case 1:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = o1& o2;
            cout<<"The result of your operation is : "<<res<<endl;
            break;

        case 2:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = o1| o2;
            cout<<"The result of your operation is : "<<res<<endl;
            break;

        case 3:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = o1^ o2;
            cout<<"The result of your operation is : "<<res<<endl;
            break;

        case 4:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = o1<< o2;
            cout<<"The result of your operation is : "<<res<<endl;
            break;

        case 5:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = o1>> o2;
            cout<<"The result of your operation is : "<<res<<endl;
            break;

        case 6:
            cout<<"Enter the value of 1st operand : ";
            cin>>o1;
            cout<<"Enter the value of 2nd operand : ";
            cin>>o2;
            res = (~ o2);
            cout<<"The result of your operation is : "<<res<<endl;
            break;
        }
        while(choice5!=0);}

    case 6:
        int choice6;
        cout<<"1. Prefix increment operator"<<endl;
        cout<<"2. Postfix increment operator"<<endl;
        cout<<"3. Prefix decrement operator"<<endl;
        cout<<"4. Postfix Decrement operator"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Please enter your choice : ";
        cin>>choice6;
        switch(choice6)
        { float o1,o2,res;
        case 0:
            cout<<"RETURNING TO MAIN MENU"<<endl;
            goto label;
            break;

        case 1:
            cout<<"Enter the value of operand : ";
            cin>>o2;
            o1 = ++o2;
            cout<<"The value of ++operand is : "<<o1<<endl;
            break;

        case 2:
            cout<<"Enter the value of operand : ";
            cin>>o2;
            res =  o2++;
            cout<<"The value of operand++ is : "<<res<<endl;
            break;

        case 3:
            cout<<"Enter the value of operand : ";
            cin>>o2;
            res =  --o2;
            cout<<"The value of --operand is : "<<res<<endl;
            break;
        case 4:
            cout<<"Enter the value of operand : ";
            cin>>o2;
            res =  o2--;
            cout<<"The value of operand-- is : "<<res<<endl;
            break;
        }

   // case 7:







}}
while(choice!=0);
}
