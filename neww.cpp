#include<iostream>
using namespace std;

int main ()
{
    // int a=10;
    // int b=20;
    // //int c=15;
    // int temp;
     
    //  cin>>temp;


    // if(temp==2)
    // {
    //    a=a+b;
    //    b=a-b;
    //    a=a-b;
    //     cout<<"2variable swap"<<a<<b;
    // }
    // else if(temp==3){
    //     temp=b;
    //     b=a;
    //     a=temp;
    //     cout<<"3 variable swap"<<a<<b;

    // }
    // else{
    //     cout<<"error";
    // }

//     char a,b,c,d, input;
//     cin>>input;

//     if(input=='a')
// {
//     cout<<"summer";
// }

//  else if(input=='b')
// {
//     cout<<"winter";
// }

//  else if(input=='c')
// {
//     cout<<"rainy";
// }
//  else if(input=='d')
// {
//     cout<<"summer";
// }
// else {
//     cout<<"nikl bs...";
// }


// homework-- prog to check the services or products 

string product,services,input,homeloan,carloan;
cout<<"ASK RIA uh want to ask ---",cin>>input;
cout<<endl;

if(input=="product"){
    cout<<"select home loan or car loan ";
    cin>>input;

if(input=="home loan"){
    cout<<"you have only limits of 5L";
}
else if(input=="carloan"){
    cout<<" you can only take 2L";
}

}
 

else if(input=="services"){
    cout<<"services are not available for uhh";
}
else{
    cout<<"invalid statement";
}

     return 0;
}
