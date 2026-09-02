#include<iostream>
using namespace std;

void sum(int a,int b){
    cout<<"2 Integers";
}

void sum(float a,float b){
    cout<<"2 floats";
}

int main()
{
    sum(2.5,1);
    sum(1,2.5);
    return 0;
}