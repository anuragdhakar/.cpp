#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a=="Askria"){
        cout<< "enter the input as Services or product";
        cin>>a;
        if(a=="product"){
            cout<<"choose btw homeloan and car loan";
            cin>>a;
             if(a=="homeloan"){

                cout<<"5Lakhs alloted";

            }
            else{
                cout<<"services are closed";
            }}
        
        

    }
    else{
        cout<<"invalid input";
    }
    return 0;
}