#include<iostream>
using namespace std;

int main (){

    for(int r=1; r<=10; ++r){

        for(int c=1;c<=10;c++){

            if(c>=r){
                cout<<r;
            }

            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}