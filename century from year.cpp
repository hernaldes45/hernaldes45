#include <iostream>
using namespace std;
int main(){
    cout<<"centuries: "<<endl;
    for(int i=1 ; i<=21 ; i++){
        cout<<i<< " century " <<i*100 - 100 + 1<<"-"<<i*100<<endl;
    }
     cout<<"\n";
}