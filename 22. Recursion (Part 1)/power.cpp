#include<iostream>
using namespace std;

int power(int n, int pow){

    if(pow == 0){
        return 1;
    }
    
    int halfPower = power(n,pow/2);
    if(pow%2==0){
        return halfPower*halfPower;
    }else{
        return n*halfPower*halfPower;
    }
}

int main(){

    cout<<power(3,2)<<endl;

    return 0;
}   