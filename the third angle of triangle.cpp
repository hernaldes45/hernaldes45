//the third angle of a triangle
#include <iostream>
using namespace std;
int main (){
    double firangle , secangle, thiangle ;
    cout<<"Enter the 1st angle value is :  ";
    cin>>firangle;
    cout<<"Enter the 2nd angle value is : ";
    cin>>secangle;
    thiangle = 180 - (firangle + secangle);
    cout<<"the 3rd angle value is: "<<thiangle ;
    return  0 ;
    
}