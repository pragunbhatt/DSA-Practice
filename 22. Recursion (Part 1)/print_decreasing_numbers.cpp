#include<iostream>
using namespace std;

void print_decreasing_order(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    print_decreasing_order(n-1);
}

int main(){

    print_decreasing_order(5);

    return 0;
}