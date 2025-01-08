#include<iostream>
using namespace std;
int main (){

    int inp;
    cout<<"enter input from 1 to--7  -------";
    cin>>inp;

    if(inp==1){
        cout<<"monday";
    }
      else if(inp==2){
            cout<<"tuesday";
        }
        else if(inp==3){
            cout<<"wednesday";
        }
        else if(inp==4){
            cout<<"thrusday";
        }
        else if(inp==5){
            cout<<"friday";
        }
        else if(inp==6){
            cout<<"saturday";
        }
        else if(inp==7){
            cout<<"sunday";
        }
        else {
            cout<<"ii";
        }
        
    return 0;
}