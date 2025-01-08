#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"enter the path --";
    cin>>a;
    if(a==1){
        cout<<"enter the path 2,3,4 --";
        cin>>a;
        if(a==2){
            cout<<"enter the path 3,4";
            cin>>a;
        }
        if(a==3){
            cout<<"enter the path 4";
        }
            }
            else{
                cout<<"invalid inpput";
            }





    return 0;
}