//Terminal game move function
#include<iostream>
using namespace std;
int main (){
    int move1 , move2, position;
    cout<<"Enter the first move value : ";
    cin>>move1;
    cout<<"Enter the second move value: ";
    cin>>move2;
    position=move1 + move2 * 2;
    cout<<position;
    return 0;
}