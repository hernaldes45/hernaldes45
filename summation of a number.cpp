//summation of a number 
#include <iostream>
using namespace std;
int main (){
    int num , count=1 , sum=0 ;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"summation of the number: ";
    while (count<=num){
        sum=sum+count;
        cout<<count;
        count++;
        if(count > num){
            cout<<"="<<sum;
        }
        else {
            cout<<"+";
        }
    }
    
    
}