#include<iostream>
using namespace std;
int main (){

    int first=0;
    int second=1;
    int next;
    cout<<first<<second;

    for(int i=3; i<=5; i++){


        next=first+second;
        first=second;
        second=next;
        cout<<next;
    }
    return 0;
}