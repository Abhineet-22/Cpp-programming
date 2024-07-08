#include <iostream>
#include <string>
using namespace std;

class Station{
      string stnname;
      int numberofplatforms=0 ;
      bool isaccessable;

  public:
    Station(){
    stnname= "New Station";
    numberofplatforms+=1;
    isaccessable= 0;
    }
    Station( string stnn, int nos, bool isacc){
        stnname=stnn;
        numberofplatforms= nos;
        isaccessable= isacc;}

    void displayname(){
        cout<< "Name of station="<<stnname<<endl;}
    void displayplatforms(){
    cout<<"Number of platforms="<<numberofplatforms<<endl;}
    void displayaccessablity(){
    cout<<"accessibility of station "<<isaccessable;}
    void setname(){
        string n;
        cout<<"enter name= ";
        cin>>n;
        stnname=n;}
    void setnumberofplatforms(){
        int p;
        cout<<"enter number of platforms";
        cin>>p;
        numberofplatforms=p;}
    void setaccessibility(){
        bool a;
        cout<<"enter 0 or 1 for accessibility";
        cin>>a;
        isaccessable=a;}
    void displaydetails(){
    cout<<"station name= "<<stnname<<endl;
    cout<<"number of platforms= "<<numberofplatforms<<endl;
    cout<<"accessibility status for disabled= "<<isaccessable<<endl;}
    };

class Line{
      string linename;
      Station stations[10];
      int currentnumberofstations=0;

  public:
    friend void displaydetails();
    void addstation(Station s){
        if(currentnumberofstations<=10){
        stations[currentnumberofstations]=s;
        currentnumberofstations+=1;}
        else{
            cout<<"max limit of stations reached";
        }
        }
    void removestation(){
        int found=0;
        int i=0,n;
        cout<<"enter station number to remove=";
        for(i=0;i<currentnumberofstations;i++){
            if(i==n){
                     stations[n]=stations[n+1];
                     found=1;}
            if (found==1){
                     currentnumberofstations-=1;}
        }
      }
      void displayallstations(){
          int i;
          for(i=0;i<currentnumberofstations;i++){
            stations[i].displaydetails();
          }}
};

class SubwaySystem{
    Line lines[10];
    int currentnumberoflines;

public:
    friend void displayallstations();
    void addline(Line l){
        if(currentnumberoflines<=10){
        lines[currentnumberoflines]=l;
        currentnumberoflines+=1;}
        else{
            cout<<"max limit of lines reached";
        }
        }
    void removeline(){
        int found=0;
        int i=0,n;
        cout<<"enter line number to remove=";
        for(i=0;i<currentnumberoflines;i++){
            if(i==n){
                     lines[n]=lines[n+1];
                     found=1;}
            if (found==1){
                     currentnumberoflines-=1;}
        }
      }
      void displayalllines(){
          int i;
          for(i=0;i<currentnumberoflines;i++){
            lines[i].displayallstations();
          }
      }};

int main(){
Station s1;
s1.setname();
s1.setnumberofplatforms();
s1.setaccessibility();
s1.displaydetails();


return 0;

}
