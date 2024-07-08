#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
    int roll,E,H,M,S,SS,FIT,p1,p2,p3,p4,p5,p6,s1,s2,s3,s4,s5,s6,sum,i;
    string name,mname,dob,fname,school,g1,g2,g3,g4,g5,g6;
    cout<<"Enter the student's name : ";
    cin>>name;
    cout<<"Enter the student's roll no. : ";
    cin>>roll;
    cout<<"Enter the student's date of birth. : ";
    cin>>dob;
    cout<<"Enter the mother's name : ";
    cin>>mname;
    cout<<"Enter the father's name : ";
    cin>>fname;
    cout<<"Enter the school's name : ";
    cin>>school;
    cout<<"Enter the theory marks of ENGLISH COMM. : ";
    cin>>E;
    cout<<"Enter the INTERNAL MARKS OF ENGLISH COMM. : ";
    cin>>p1;
    cout<<"Enter the theory marks of HINDI COURSE-A : ";
    cin>>H;
    cout<<"Enter the INTERNAL MARKS OF HINDI COURSE-A : ";
    cin>>p2;
    cout<<"Enter the theory marks of MATHEMATICS : ";
    cin>>M;
    cout<<"Enter the INTERNAL MARKS OF MATHEMATICS : ";
    cin>>p3;
    cout<<"Enter the theory marks of SCIENCE : ";
    cin>>S;
    cout<<"Enter the INTERNAL MARKS OF SCIENCE : ";
    cin>>p4;
    cout<<"Enter the theory marks of SOCIAL SCIENCE. : ";
    cin>>SS;
    cout<<"Enter the INTERNAL MARKS OF SOCIAL SCIENCE : ";
    cin>>p5;
    cout<<"Enter the theory marks of FOUNDATIONS OF IT : ";
    cin>>FIT;
    cout<<"Enter the INTERNAL MARKS OF FOUNDATIONS OF IT : ";
    cin>>p6;
    s1 = E+p1;
    s2 = H+p2;
    s3 = M+p3;
    s4 = S+p4;
    s5 = SS+p5;
    s6 = FIT+p6;

    if (s1> 90 && s1<=100)
    {g1 = "A1";}
    else if (s1>80 && s1<=90)
    {g1 = "A2";}
    else if (s1>70 && s1<=80)
    {g1 = "B1";}
    else if (s1>60 && s1<=70)
    {g1 = "B2";}
    else if (s1>50 && s1<=60)
    {g1 = "C1";}
    else if (s1>40 && s1<=50)
    {g1 = "C2" ;}
    else if (s1<=40)
    {g1 = "F";}

    cout<<g1<<endl;

    if (s2> 90 && s2<=100)
    {g2 = "A1";}
    else if (s2>80 && s2<=90)
    {g2 = "A2";}
    else if (s2>70 && s2<=80)
    {g2 = "B1";}
    else if (s2>60 && s2<=70)
    {g2 = "B2";}
    else if (s2>50 && s2<=60)
    {g2 = "C1";}
    else if (s2>40 && s2<=50)
    {g2 = "C2" ;}
    else if (s2<=40)
    {g2 = "F";}

    cout<<g2<<endl;

    if (s3> 90 && s3<=100)
    {g3 = "A1";}
    else if (s3>80 && s3<=90)
    {g3 = "A2";}
    else if (s3>70 && s3<=80)
    {g3 = "B1";}
    else if (s3>60 && s3<=70)
    {g3 = "B2";}
    else if (s3>50 && s3<=60)
    {g3 = "C1";}
    else if (s3>40 && s3<=50)
    {g3 = "C2" ;}
    else if (s3<=40)
    {g3 = "F";}

    cout<<g3<<endl;

    if (s4> 90 && s4<=100)
    {g4 = "A1";}
    else if (s4>80 && s4<=90)
    {g4 = "A2";}
    else if (s4>70 && s4<=80)
    {g4 = "B1";}
    else if (s4>60 && s4<=70)
    {g4 = "B2";}
    else if (s4>50 && s4<=60)
    {g4 = "C1";}
    else if (s4>40 && s4<=50)
    {g4 = "C2" ;}
    else if (s4<=40)
    {g4 = "F";}

    cout<<g4<<endl;

    if (s5> 90 && s5<=100)
    {g5 = "A1";}
    else if (s5>80 && s5<=90)
    {g5 = "A2";}
    else if (s5>70 && s5<=80)
    {g5 = "B1";}
    else if (s5>60 && s5<=70)
    {g5 = "B2";}
    else if (s5>50 && s5<=60)
    {g5 = "C1";}
    else if (s5>40 && s5<=50)
    {g5 = "C2" ;}
    else if (s5<=40)
    {g5 = "F";}

    cout<<g5<<endl;

    if (s6> 90 && s6<=100)
    {g6 = "A1";}
    else if (s6>80 && s6<=90)
    {g6 = "A2";}
    else if (s6>70 && s6<=80)
    {g6 = "B1";}
    else if (s6>60 && s6<=70)
    {g6 = "B2";}
    else if (s6>50 && s6<=60)
    {g6 = "C1";}
    else if (s6>40 && s6<=50)
    {g6 = "C2" ;}
    else if (s6<=40)
    {g6 = "F";}

    cout<<g6<<endl;

    system("cls");
    cout<<fixed<<setprecision(2);
    cout<<setw(72)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
    cout<<setw(57)<<"MARKS STATEMENT"<<endl;
    cout<<setw(80)<<"ALLL INDIA SECONDARY SCHOOL EXAMINATION 2018"<<endl;
    cout<<"NAME             : "<<"  "<<name<<endl;
    cout<<"FATHER'S NAME    : "<<"  "<<fname<<endl;
    cout<<"MOTHER'S NAME    : "<<"  "<<mname<<endl;
    cout<<"DATE OF BIRTH    : "<<"  "<<dob<<endl;
    cout<<"ROLL NO.         : "<<"  "<<roll<<endl;
    cout<<"===================================================================================================="<<endl;
    cout<<"SUB CODE"<<setw(18)<<"SUBJECT"<<setw(23)<<"THEORY"<<setw(10)<<"IA/PR"<<setw(19)<<"TOTAL"<<setw(21)<<"POSITIONAL GRADE"<<endl;
    cout<<"==================================================================================================="<<endl;
    cout<<"101"<<setw(25)<<"ENGLISH COMM."<<setw(18)<<E<<setw(10)<<p1<<setw(20)<<s1<<setw(14)<<g1<<endl;
    cout<<"002"<<setw(25)<<"HINDI COURSE-A"<<setw(18)<<H<<setw(10)<<p2<<setw(20)<<s2<<setw(14)<<g2<<endl;
    cout<<"041"<<setw(25)<<"MATHEMATICS"<<setw(18)<<M<<setw(10)<<p3<<setw(20)<<s3<<setw(14)<<g3<<endl;
    cout<<"086"<<setw(25)<<"SCIENCE"<<setw(18)<<S<<setw(10)<<p4<<setw(20)<<s4<<setw(14)<<g4<<endl;
    cout<<"087"<<setw(25)<<"SOCIAL SCIENCE"<<setw(18)<<SS<<setw(10)<<p4<<setw(20)<<s5<<setw(14)<<g5<<endl;
    cout<<"165"<<setw(25)<<"FOUNDATION OF IT"<<setw(18)<<FIT<<setw(10)<<p4<<setw(20)<<s6<<setw(14)<<g6<<endl;
    cout<<"==================================================================================================="<<endl;
    system("color 3");
    cout<<"\n\n\n"<<setw(60)<<"PREPARED BY ABHINEET AGRAWAL."<<endl;



}
