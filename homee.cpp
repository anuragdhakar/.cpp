#include<iostream>
#include<limits>
using namespace std;
int main()
{
    //size off
    cout<<sizeof(int);
    cout<<endl;


    //address  of
    int h;
    cout<<&h;
    cout<<endl;

   //numeric_limits
   cout<< numeric_limits<int>::min();
   cout<<endl;

   // Arithmetic operstors
   int a=10,b=20;

   //addition
   cout<<a+b;
   cout<<endl;
   //substraction
   cout<<a-b;
   cout<<endl;
   //division
   cout<<a/b;
   cout<<endl;
   //multiplication
   cout<<a*b;
   cout<<endl;
   //modulous
   cout<<a%b;
   cout<<endl;


   //Relational Operators/ Comparison operators
   
    //less then
cout<<(a<b);
cout<<endl;
    //greater then
cout<<(a>b);
cout<<endl;
   //less then equal to
cout<<(a<=b);
cout<<endl;
   //greater then equal to 
cout<<(a>=b);
   //double equal to
cout<<(a==b);
cout<<endl;

int number;
cin>>number;
(number%2==0)?cout<<"even":cout<<"odd";


   return 0;
}