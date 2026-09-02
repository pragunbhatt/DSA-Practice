#include <iostream>
using namespace std;

//LARGEST OF TWO NUMBERS

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"\nEnter second number : ";
    cin>>b;

    if(a>b){
        cout<<"First number is greater";
    }else{
        cout<<"Second number is greater";
    }

    return 0;
}