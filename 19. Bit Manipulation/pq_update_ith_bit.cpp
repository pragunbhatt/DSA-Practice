#include<iostream>
using namespace std;

void update_i_bit(int num, int i, int val){
    if(val == 0){
        int bitMask = ~(1<<i);
        cout<<(num & bitMask);
    }
}

int main(){

    return 0;
}