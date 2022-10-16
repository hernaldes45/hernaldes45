//area and perimeter of a rectangle 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double length, width , perimeter, area;
    cout<<"Enter the length of the rectangle: " ; 
    cin>>length;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    perimeter= (length+width)*2 ; 
    area= length*width;
    cout<<"the perimeter of the rectangle is: "<<perimeter<<endl;
    cout<<"the area of the rectangle is : "<<area<<endl;
    return 0 ; 
    
}