#include <iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter your age : ";
    cin>> age;

    if (age>=18){
        cout<<"Can Vote"<<endl;
    }else{
        cout<<"CANNOT Vote"<<endl;
    }

    return 0;
}