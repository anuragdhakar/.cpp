#include <iostream>
using namespace std;

int main(){

    int num=121;
    int ans=num;
    int rev=0;

    while(num!=0){

        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

    if(rev==ans){
        cout<<"Pallindrom";
    }

    else{
        cout<<"Not a Pallindrom";
    }

}