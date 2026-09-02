#include<iostream>
using namespace std;

void sum(int a,int b=3){

    cout<<"Sum : "<<a+b<<endl;

}

int main()
{
    
    sum(2,5);
    sum(3);

    return 0;
}