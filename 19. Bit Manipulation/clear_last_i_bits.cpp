#include<iostream>
using namespace std;

void clear_last_i_bits(int num, int i){

    int bitMask = (~0) << i;
    cout<<(num & bitMask)<<endl;

}

int main(){

    clear_last_i_bits(15,2);

    return 0;
}