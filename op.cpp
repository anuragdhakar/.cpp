#include<iostream>
using namespace std;
int main (){

//    for(int i=1; i<=10; i++){
//     cout<<2*i<<endl;
//}
// for(int i=2; i<=10; ++i){

//     for (int j=1; j<i ;++j)
//     {
//         cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        
//     }
    
// }
;
// for(int i=1; i<=10; i++){
//     for(int j=1; j<i; j++){
// cout<<i<<endl;
//     }
    


    //prog of sum-----------------------
// }
// int n;
// int sum=0;
// cout<<"enter n";
// cin>>n;
// for(int i=1; i<=n; ++i){

// sum=sum+i;
// }
// cout<<sum;


// prog og factorial -----------------------
// int n;
// int fact=1;
// cout<<"enter n";
// cin>>n;
// for(int i=1; i<=n; ++i){

// fact=fact*i;
// }
// cout<<fact;


// prog og factor ex...8,,,,,,1,2,4,8----------------------------------
// int num;
// cout<<"enter n";
// cin>>num;
// for(int i=1; i<=num; ++i){

// if(num%2==0){
//     cout<<i;
// }
// }

int sn=4;
int ln=8;
int hcf=0;

for(int i=1;i<=sn; ++i){
    if(sn%i==0 && ln%2==0){
        hcf=i;
    }
}
cout<<hcf;
return 0;
}