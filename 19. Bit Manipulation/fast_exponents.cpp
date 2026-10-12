#include<iostream>
using namespace std;

void fastPow(int num,int pow){
    int ans = 1;
    int x = num;
    while(pow!=0){
        int lastDigit = pow & 1;
        if(lastDigit > 0){
            ans = ans * x;
        }
        x = x*x;
        pow = pow>>1;
    }

    cout<<ans<<endl;
}

int main(){

    fastPow(2,4);

    return 0;
}