#include<iostream>
#include <cmath>
using namespace std;

void checkPrime(int n){

    bool isPrime = true;

    for(int i=2;i<=sqrt(n);i++){
        
        if(n%i==0){
            isPrime = false;
            break;
        }

    }

    if(isPrime || n==1){
        cout<<n<<" is Prime"<<endl;
    }else{
        cout<<n<<" is not Prime"<<endl;
    }

}

int main()
{

    checkPrime(7);
    checkPrime(4);
    
    return 0;
}