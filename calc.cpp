#include<iostream>
#include<limits>
using namespace std;

int main (){

    //size of
cout <<sizeof(int);
cout<<endl;


    //address
int a;
cout<<&a;
cout<<endl;

    //limits
    cout<< numeric_limits<int>::min();
    cout<<endl;
    cout<< numeric_limits<int>::max();
    cout<<endl;
    cout<< numeric_limits<char>::min();
cout<<endl;
    cout<<static_cast<int>(numeric_limits<char>::min());
    return 0;
    
}