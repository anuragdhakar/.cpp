#include<iostream>
using namespace std;
int main (){

    int number=1234;
    int digit1,digit2,digit3;

    digit1=number%10;
    number=number/10;

    digit2=number%10;
    number=number/10;

    digit3=number%10;
    number=number/10;

    cout<<digit1<<digit2<<digit3<<number;
    return 0;
}