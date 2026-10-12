#include<iostream>
using namespace std;

void update_i_bit(int num, int i,int val){

    num = num & ~(1<<i);
    cout<< (num | (val<<i))<<endl;

}

int main(){

    update_i_bit(7,2,0);

    return 0;
}