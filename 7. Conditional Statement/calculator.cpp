#include <iostream>
using namespace std;

int main(){

    int a,b;
    char operation;

    cout<<"Enter first Number : ";
    cin>>a;

    cout<<"\nEnter second Number : ";
    cin>>b;

    cout<<"\nEnter Operation to perform (+/-/*//) : ";
    cin>>operation;

    switch(operation){
        case '+':
            cout<<"\nSum is : "<<a+b<<endl;
            break;

        case '-':
            cout<<"\nDifference is : "<<a-b<<endl;
            break;

        case '*':
            cout<<"\nProduct is : "<<a*b<<endl;
            break;

        case '/':
            cout<<"\nDivision is : "<<a/b<<endl;
            break;

        default :
            cout<<"\nEnter a valid operation to perform !!";
    }


    return 0;
}