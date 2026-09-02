#include <iostream>
using namespace std;

int main(){

    //Armstrong number
    int a;
    cout<<"Enter 3 digit number";
    cin>>a;
    int fD = (int)(a/100);
    int sD = (int)(a/10) - (fD*10);
    int tD = a - (fD*100) - (sD*10);

    int sumOfCubes = (fD*fD*fD) + (sD*sD*sD) + (tD*tD*tD);

    if(sumOfCubes == a){
        cout<<"\nThe Number is an Armstrong Number";
    }else{
        cout<<"\nThe Nmber is not an Armstrong Number";
    }

    return 0;
}