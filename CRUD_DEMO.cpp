#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Employee{
public :
    int empno;
    string ename;
    long salary;
    long int getsal(){
            return salary;
            }
    }emp[100];
main()
{
    int choice=0,n=0,totalrecord=0;
    int found = 0;
    do{
        cout<<"1. ADD RECORD"<<endl;
        cout<<"2. DISPLAY RECORD"<<endl;
        cout<<"3. SEARCH BY ENAME"<<endl;
        cout<<"4. SEARCH BY EMPNO"<<endl;
        cout<<"5. SEARCH BY SALARY"<<endl;
        cout<<"6. UPDATE BY EMPNO"<<endl;
        cout<<"7. DELETE BY EMPNO"<<endl;
        cout<<"8. DELETE BY ENAME"<<endl;
        cout<<"9. HIGHEST PAID EMPLOYEE"<<endl;
        cout<<"0.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case(1):
            cout<<"Enter no. of employees : ";
            cin>>n;
            for (int i=totalrecord;i<n+totalrecord;i++)
            {
                    cout<<"Enter employee name : ";
                    cin>>emp[i].ename;
                    cout<<"Enter employee number : ";
                    cin>>emp[i].empno;
                    cout<<"Enter employee salary : ";
                    cin>>emp[i].salary;
            }
            totalrecord+=n;
            break;

        case(2):
            {
                cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                for (int i=0;i<totalrecord;i++){
                    cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;}
                    break;
            }

        case(3):
            {
                string name;
                found = 0;
                cout<<"Enter the employee name to search : ";
                cin>>name;
                for (int i=0;i<totalrecord;i++)
                {
                    if (name.compare(emp[i].ename)==0)
                    {
                        cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                        cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;
                        found = 1;
                    }
                }
                if(!found)
                {
                    cout<<"Record Not found..!"<<endl;
                }
            break;

        }

        case(4):
            {
                int eno;
                found = 0;
                cout<<"Enter the employee no to search : ";
                cin>>eno;
                for (int i=0;i<totalrecord;i++)
                {
                    if (eno == emp[i].empno)
                    {
                        cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                        cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;
                        found = 1;
                    }
                }
                if(!found)
                {
                    cout<<"Record Not found..!"<<endl;
                }
            break;
            }

         case(5):
            {
                int sal;
                found = 0;
                cout<<"Enter the employee salary to search : ";
                cin>>sal;
                for (int i=0;i<totalrecord;i++)
                {
                    if (sal == emp[i].salary)
                    {
                        cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                        cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;
                        found = 1;
                    }
                }
                if(!found)
                {
                    cout<<"Record Not found..!"<<endl;
                }
            break;
            }

        case(6):
            {
                int eno,inp,n3,n4;
                string n1,n2;
                found = 0;
                cout<<"Enter the employee no to search : ";
                cin>>eno;
                for (int i=0;i<totalrecord;i++)
                {
                    if (eno == emp[i].empno)
                    {
                        cout<<"1.UPDATE EMPLOYEE NAME\n2.UPDATE SALARY\nEnter your choice : ";
                        cin>>inp;
                        if (inp==1)
                        {
                            cout<<"Enter old employee name : ";
                            cin>>n1;
                            cout<<"Enter new employee name : ";
                            cin>>n2;
                            if(n1.compare(emp[i].ename)==0)
                            {
                                emp[i].ename = n2;
                                cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                                cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;
                                found = 1;
                            }
                        }
                        if (inp==2)
                        {
                            cout<<"Enter old salary :";
                            cin>>n3;
                            cout<<"Enter new salary : ";
                            cin>>n4;
                            if(n3 == emp[i].salary)
                            {
                                emp[i].salary = n4;
                                cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                                cout<<left<<setw(16)<<emp[i].empno<<setw(12)<<emp[i].ename<<right<<setw(14)<<emp[i].salary<<endl;
                                found = 1;
                            }
                        }
                    }
                }
                if(!found)
                {
                    cout<<"Record Not found..!"<<endl;
                }
            break;
            }

        case(7):
            {
                int temp;
                found = 0;
                int eno;
                cout<<"Enter employee no to delete : ";
                cin>>eno;
                for(int i=0; i<totalrecord;i++)
                {
                    if(emp[i].empno==eno)
                    {
                        temp = 1;
                        found=1;
                    }
                    emp[i]=emp[i+temp];
                }
                totalrecord-=1;
            }
            break;

        case(8):
            {
                int temp;
                found = 0;
                string name;
                cout<<"Enter employee name to delete : ";
                cin>>name;
                for(int i=0; i<totalrecord;i++)
                {
                    if(name.compare(emp[i].ename)==0)
                    {
                        temp = 1;
                        found=1;
                    }
                    emp[i]=emp[i+temp];
                }
                totalrecord-=1;
            }
            break;

        case(9):
             int max_s= emp[0].getsal(),ret_ind=0;
             for(int i=1;i<totalrecord;i++)
                {
                    if(emp[i].getsal()>max_s){
                    ret_ind=i;}
                }
                cout<<left<<setw(16)<<"Employee No"<<setw(16)<<"Employee Name"<<right<<setw(11)<<"Salary"<<endl;
                cout<<left<<setw(16)<<emp[ret_ind].empno<<setw(12)<<emp[ret_ind].ename<<right<<setw(14)<<emp[ret_ind].salary<<endl;
}}
while (choice!=0);
}
