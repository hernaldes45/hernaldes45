#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double radius , volume ; 
    cout<<"Enter the radius value : ";
    cin>>radius;
    double pi=3.14;
    volume=(1.33)*pi*pow(radius, 3);
    cout<<"the volume is :"<<volume;
    return 0;
}
