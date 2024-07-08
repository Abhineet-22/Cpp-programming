#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
main()
{
    int q1,q2,q3,q4;
    float p1,p2,p3,p4,sum;
    cout<<"Enter the price of computer : "; cin>>p1;
    cout<<"Enter the quantity of computer : "; cin>>q1;
    cout<<"Enter the price of mobile : "; cin>>p2;
    cout<<"Enter the quantity of mobile : "; cin>>q2;
    cout<<"Enter the price of calculator : "; cin>>p3;
    cout<<"Enter the quantity of calculator : "; cin>>q3;
    cout<<"Enter the price of pencil : "; cin>>p4;
    cout<<"Enter the quantity of pencil : "; cin>>q4;
    sum = (p1*q1)+(p2*q2)+(p3*q3)+(p4*q4);
    system("cls");
    cout<<fixed<<setprecision(2);
    cout<<setw(42)<<"XYZ MART PVT LTD"<<endl;
    cout<<setw(47)<<"3\\top, PQR SHOPPING MALL"<<endl;
    cout<<setw(40)<<"GANDHINAGAR"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"Bill No. : 101"<<setw(55)<<"05-FEB-2024"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"No."<<setw(18)<<"Item Name"<<setw(18)<<"Unit Price"<<setw(10)<<"Qty"<<setw(20)<<"Total Price"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"1."<<setw(18)<<"Computer"<<setw(18)<<p1<<setw(10)<<q1<<setw(20)<<p1*q1<<endl;
    cout<<"2."<<setw(18)<<"Mobile"<<setw(18)<<p2<<setw(10)<<q2<<setw(20)<<p2*q2<<endl;
    cout<<"3."<<setw(18)<<"Calculator"<<setw(18)<<p3<<setw(10)<<q3<<setw(20)<<p3*q3<<endl;
    cout<<"4."<<setw(18)<<"Pencil"<<setw(18)<<p4<<setw(10)<<q4<<setw(20)<<p4*q4<<endl;
    cout<<"====================================================================="<<endl;
    cout<<setw(60)<<"Total amount = "<<setw(8)<<sum<<endl;
    cout<<setw(60)<<"Discount = "<<setw(9)<<sum*0.1<<endl;
    cout<<"====================================================================="<<endl;
    cout<<setw(58)<<"Total amount to be paid = "<<setw(11)<<sum*0.9<<endl;

    system("color 3");
    cout<<"\n\n\n"<<setw(52)<<"PREPARED BY ABHINEET AGRAWAL."<<endl;
}
