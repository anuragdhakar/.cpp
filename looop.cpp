#include<iostream>
using namespace std;
int main (){

    for(int r=1; r<=5; ++r){
       
       for(int c=1; c<=5; ++c){

       if(r>=6-c){
        cout<<char(r+64);
       }
       
       else{
        cout<<"-";
        
       }
    
       }
cout<<endl;
    
    }
    return 0;
}