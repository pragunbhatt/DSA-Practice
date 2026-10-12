#include<iostream>
using namespace std;

void check_i_bit(int num, int i){
    int mask = 1<<i;
    if((num & mask) > 0){
        cout<<"1";
    }else{
        cout<<"0";
    }
}

int main(){

    check_i_bit(6,2);
    return 0;
}