//converting celsius to fahrenheit 
#include <iostream>
using namespace std;
int main (){
    double celsius, fahrenheit;
    cout<<"Enter the temperature value: ";
    cin>>celsius;
    fahrenheit=(celsius* 9/5) + 32;
    cout<<"the temperature is: "<<fahrenheit<< "f";
}