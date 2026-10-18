#include<iostream>
using namespace std;

int sumNums(int n){
    if(n==1){
        return 1;
    }

    return n + sumNums(n-1);
}

int main(){

    cout<<sumNums(2)<<endl;

    return 0;
}