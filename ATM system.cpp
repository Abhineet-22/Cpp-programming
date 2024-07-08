#include<iostream>
#include<cstring>
#include<string>

using namespace std;
class atm{

int pin;
string acc_type;
float bal;
public:

atm(){
bal = 0.00;
pin = 0000;
acc_type = "savings";
}

void set_details(){
int o_pin,n_pin;
cout<<"The default pin is : 0000 and the default account type is Savings."<<endl;
cout<<"Enter your old pin : ";
cin>>o_pin;
if(pin==o_pin){
    cout<<"Enter your new pin : ";
    cin>>n_pin;
    pin=n_pin;
    cout<<"Pin set successfully."<<endl;
}
else{
    cout<<"Entered wrong old pin."<<endl;

    }
}
void show_balance(){
cout<<"Your current balance is : "<<bal<<endl;
}

void pin_ver(){
int curr_pin;
cout<<"Enter your current pin : ";
cin>>curr_pin;
if (curr_pin == pin){
    cout<<"Pin Verified successfully."<<endl;
}
else{
cout<<"Pin verification unsucessful."<<endl;
    }
}

void withdrawal(){
int w_amt;
cout<<"Enter the amount you want to withdraw : ";
cin>>w_amt;
if(w_amt<=bal){
bal-=w_amt;
cout<<"Amount withdrawn successfully. Your current balance is : "<<bal<<endl;
}
else{
cout<<"Insufficient Balance."<<endl;
    }
}

void deposit(){
int d_amt;
cout<<"Enter the amount to deposit : ";
cin>>d_amt;
bal+=d_amt;
cout<<"Your current balance is : "<<bal<<endl;
}
};
main()
{
atm a;
int choice = 11;
do{
cout<<"1. SET YOUR DETAILS\n2. SHOW BALANCE\n3. VERIFY YOUR PIN\n4. WITHDRAW MONEY\n5. DEPOSIT MONEY\n0. EXIT\n";
cout<<"Enter your choice : ";
cin>>choice;
if(choice == 0){
    cout<<"Thankyou for using Ultra HDFC."<<endl;
}
switch(choice){
    case 1:
        a.set_details();
        break;
    case 2:
        a.show_balance();
        break;
    case 3:
        a.pin_ver();
        break;
    case 4:
        a.withdrawal();
        break;
    case 5:
        a.deposit();
        break;
}
}while(choice!=0);
}
