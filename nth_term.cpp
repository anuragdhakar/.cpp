#include<iostream>
using namespace std;
int main (){

    int n=8 ;
    int term=0;

    for(int i=1;i<=n; ++i){
        term=term*10+1;
        cout<<term<<"\t";
    }
    return 0;
}