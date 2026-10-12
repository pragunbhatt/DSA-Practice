#include<iostream>
using namespace std;

void clear_i_bit(int num, int i){

    int bitMask = ~(1<<i);
    cout<<(num & bitMask)<<endl;

}

int main(){

    clear_i_bit(6,1);

    return 0;
}