#include<iostream>
using namespace std;
int main (){

int a,amount;
cout<<"enter the travelled distance in km ";
cout<<endl;
cin>>a;
 if (a>=0 && a<=50){

    cout<<"as per 10rs per km Your amount = "<<a*10;
 }
 else if (a>=50 && a<=100){
    cout<<"as per 20rs per km Your amount = "<<50*10+(a-50)*20;
 }
 else if (a>100){
    cout<<"as per 30rs per km Your amount ="<<50*10+(50*20)+(a-100)*30-;
 }
 else{
    cout<<"ii";
 }
 return 0;

}