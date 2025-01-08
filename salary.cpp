#include<iostream>
using namespace std;
int main (){

//     int salary ,da,incentive,total;
//     cout<<"enter salary";
//     cin>>salary;
// if(salary<150000){
//     cout<<"da ="<<(da=salary*20)/100<<endl,incentive=(salary/100)*10;
// total=salary+da+incentive;
// cout<<total;
// }
// else if(salary>150000 && salary<250000){
//      cout<<"da ="<<(da=salary*3)/10<<endl,incentive=(salary/10);
// total=salary+da+incentive;
// cout<<total;
// }
// else if(salary>250000){
//      cout<<"da ="<<(da=salary*2)/6<<endl,incentive=(salary/10);
// total=salary+da+incentive;
// cout<<total;
// }

int salary,da,incentive,total;
cout<<"enter salary";
cin>>salary;

if(salary<150000){
    da=(salary*20)/100;
    incentive=salary/10;
    total=salary+da+incentive;
    cout<<total;
}
else if(salary>150000 && salary<250000){
     da=(salary*3)/10;
    incentive=salary/10;
    total=salary+da+incentive;
    cout<<total;
}
else if(salary>250000){
     da=(salary*2)/6;
    incentive=salary/10;
    total=salary+da+incentive;
    cout<<total;
}

    return 0;
}