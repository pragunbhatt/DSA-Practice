#include<iostream>
using namespace std;

int friendsPairing(int n){

    if(n==2 || n==1){ //base case
        return n;
    }

    //single
    int ans1 = friendsPairing(n-1);

    //pair
    int ans2 = (n-1) * friendsPairing(n-2);

    return ans1+ans2;

}

int main(){

    return 0;
}