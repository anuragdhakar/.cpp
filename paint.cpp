#include<iostream>
using namespace std;
int main (){
int a;
cout<<"enter 1.food and 2.bevrages";
cin>>a;
switch(a)
{
case 'a':cout<<"enter your fav food";
       cin>>a;
       switch(a)
       {
        case 1:cout<<"samosa";
        break;

         case 2:cout<<"chatni";
        break;

        default:cout<<"ii";

       }
    break;
     
   case 2:cout<<"enter your fav drink 1.mocha 2.mcdowells";
       cin>>a;
       switch(a)
       {
        case 1:cout<<"mocha";
        break;

         case 2:cout<<"mcdowells";
        break;

        default:cout<<"ii";

       }
    break;
   


default:cout<<"ii";
break;



}







}