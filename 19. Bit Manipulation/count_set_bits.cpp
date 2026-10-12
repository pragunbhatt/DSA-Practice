#include<iostream>
using namespace std;

void count_set_bits(int num){

    int count = 0;

    while(num!=0){
        int lastDigit = num & 1;
        count += lastDigit;
        num = num>>1;
    }

    cout<<count<<endl;

}

int main(){

    count_set_bits(10);

    return 0;
}