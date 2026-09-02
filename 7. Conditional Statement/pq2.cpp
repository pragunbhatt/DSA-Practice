#include <iostream>
using namespace std;

//ODD OR EVEN

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    
    if(a%2 == 0){
        cout<<endl;
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

    return 0;
}