#include<iostream>
using namespace std;

bool check_power_of_2(int num){

    if((num & (num-1))==0){
        return true;
    }

    return false;
}

int main(){

    cout<<check_power_of_2(8)<<endl;
    cout<<check_power_of_2(16)<<endl;
    cout<<check_power_of_2(9)<<endl;
    cout<<check_power_of_2(12)<<endl;

    return 0;
}