//program to calculate taxes 
#include <iostream>
using namespace std;
int main (){
    double sales, statetax, countytax;
    cout<<"Enter sales:";
    cin>>sales;
    double satetaxrate=0.13;
    statetax= sales * satetaxrate ;
    double countytaxrate=0.04;
    countytax=sales*countytaxrate;
    cout<<"sales are:"<<sales<<endl;
    cout<<"state tax is:"<<statetax<<endl;
    cout<<"county tax is:"<<countytax<<endl;
       
       
       return  0 ;
    
    
    
    
}