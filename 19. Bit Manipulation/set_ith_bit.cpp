#include<iostream>
using namespace std;

void set_i_bit(int num, int i){

    int bitMask = 1<<i;
    cout<<(num|bitMask)<<endl;

}

int main(){

    set_i_bit(6,3);

    return 0;
}