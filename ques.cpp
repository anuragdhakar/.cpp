#include<iostream>
using namespace std;
int main ()
 {
//     // program using ternary opoerator
//     int n;
//     cin>>n;
//    (n%2==0)?cout<<"even":cout<<"odd";
//    cout<<endl;


//    // homework-- prog. to check password is correct or not
//    int num;
//    int pass=1234;

// cout << "Enter the number: ", cin >> num;

//    (num==pass)?cout<<"correct":cout<<"invalid";
//    cout<<endl;

//  //prog to check if a num is divisible by both the values or not
//    int nn;
//    cin>>nn;
// (nn%2==0 && nn%3==0)?cout<<"div by both":cout<<"error";


// // prog to chech value from -1 to 5 is correct or not if user gives input
// int no;
// cin>>no;
// (no>=-1 && no<=5)?cout<<"correct":cout<<"incorrect";

// int password;
// cout<<"enter the password";
// cin>>password;
// (password==1111)?cout<<"correct":cout<<"wrong password",cout<<endl,
// cin>>password;
// (password==1111)?cout<<"correct":cout<<"wrong password",cout<<endl,
// cout<<"your card has been BLOCKED";


//prog to check pass of phone is correct or not 
int pass=1111,n;
cin>>n;
if(n==pass){
   cout<<"pass is correct";
}
else{
   cout<<"wrong password try again";
   cin>>n;
   if(n==pass){
   cout<<"pass is correct";
}
else{
   cout<<"BLOCKED";
}

}

   return 0;
}
