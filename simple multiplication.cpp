//simple multiplication
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n % 2==0){
        cout<<n*8;
        
    }
    else {
        cout<<n*9;
    }
    
}