//swapping two numbers 
#include <iostream>
using namespace std;
int main (){
    int a , b ;
    cin>>a;
    cin>>b;
    cout<<"Before swapping: ";
    cout<<" a = "<<a;
    cout<<" , b = "<<b<<endl;
    a=a+b ;
    b=a-b;
    a=a-b;
    cout<<"after swapping :";
    cout<<"a = "<<a;
    cout<<", b = "<<b;
    
}