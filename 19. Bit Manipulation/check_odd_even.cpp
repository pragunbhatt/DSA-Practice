#include<iostream>
using namespace std;

int main(){

    int num=12;

    if((num&1) == 1){
        cout<<"odd"<<endl;
    }else{
        cout<<"even"<<endl;
    }

    return 0;
}