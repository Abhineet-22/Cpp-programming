#include<iostream>
#include<string>
using namespace std;

class student{
protected:
    int rno;
    string name;
public:
    void get_r(){
    int n;
    cout<<"Enter the roll no : ";
    cin>>n;
    rno = n;
    }
void get_n(){
    string nm;
    cout<<"Enter the name : ";
    cin>>nm;
    name = nm;
    }
};

class test{
protected:
    float marks[5];
public:
    void get_marks(){
    float m;
    for(int i=0;i<5;i++){
      cout<<"Enter the marks of subject "<<i+1<<": ";
      cin>>m;
      marks[i] = m;
      }
    }
void put_marks(){
    for(int i=0;i<5;i++){
        cout<<"Marks of subject "<<i+1<<" : "<<marks[i]<<endl;
    }
  }
};

class result : public student, public test{
    float totalmarks = 0.00;
    float percentage;
public:
    void disp_tm(){                                   //Function to display totalmarks
        for(int i=0;i<5;i++){
            totalmarks+= marks[i];
            cout<<"Marks of subject "<<i+1<<" : "<<marks[i]<<endl;
        }
        cout<<"Total marks : "<<totalmarks<<endl;
    }
    void disp_per(){                                  //Function to display percentage
        percentage = totalmarks/5;
        cout<<"Percentage obtained : "<<percentage<<"% "<<endl;
    }
void display(){
cout<<"DETAILS OF STUDENT\n"<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Roll No : "<<rno<<endl;
put_marks();
cout<<"Total marks : "<<totalmarks<<endl;
cout<<"Percentage obtained : "<<percentage<<"% "<<endl;
}
};

main(){
    student s;
    test t;
    result r;
int choice = 11;
do{
cout<<"1. ENTER STUDENT ROLL NO\n2. ENTER STUDENT NAME\n3. ENTER STUDENT MARKS\n4. SHOW TOTAL MARKS\n5. SHOW PERCENTAGE\n6. SHOW STUDENT DETAILS\n0. EXIT\n";
cout<<"Enter your choice : ";
cin>>choice;
if(choice == 0){
    cout<<"Thank you for using GTU Program."<<endl;
}
switch(choice){
    case 1:
        r.get_r();
        break;
    case 2:
        r.get_n();
        break;
    case 3:
        r.get_marks();
        break;
    case 4:
        r.disp_tm();
        break;
    case 5:
        r.disp_per();
        break;
    case 6:
        r.display();
        break;
}
}while(choice!=0);
}
