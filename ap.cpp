#include<iostream>
#include<cmath>
using namespace std;
int main (){
// int n=5;
// int term;
// int a=1;
// int d=2;


// for(int i=0;i<=n;++i){

//     term=a+i*d;
//     cout<<term<<"\t";
// }



int n=5;
int term;
int a=1;
int r=2;


for(int i=0;i<=n;++i){

    term=a*pow(r,i);
    cout<<term<<"\t";
}
return 0;

}













//term=a*pow(r,i);