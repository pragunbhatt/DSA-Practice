#include <iostream>
using namespace std;

int main(){

    int age = 19;
    int isAdult = (age>=18) ? 100:200;

    cout<<isAdult<<endl;

    // Largest of two numbers :
    int a = 5;
    int b= 7;
    int largest = (a>=b) ? a:b;

    cout<<largest;

    return 0;
}