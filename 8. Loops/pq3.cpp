//Print prime numbers from 2-N
#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int j=1;j<=n;j++){
        bool isPrime = true;

        for(int i=2;i<j;i++){
            if (j%i==0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            cout<<j<<"Number is prime"<<endl;
        }else{
            cout<<j<<"Number is NOT Prime"<<endl;
        }
    }

    return 0;
}