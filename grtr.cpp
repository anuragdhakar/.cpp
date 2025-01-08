#include<iostream>
using namespace std;
int main (){

    int num=2531;
    int gtr=num;
    int ans=0;
    while(num!=0){
       int digit=num%10;

       if(digit>ans){
        ans=digit;
       }
       num=num/10;
       ans=ans*10+digit;


}
    


   return 0;
}