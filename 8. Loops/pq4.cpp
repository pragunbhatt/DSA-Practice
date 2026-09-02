//Fibbonachi series
#include<iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    int nextNum = 0;

    for(int i=1;i<=10;i++){
        cout<<num1<<endl;
        nextNum = num1+num2;
        num1= num2;
        num2 = nextNum;
    }

    return 0;
}