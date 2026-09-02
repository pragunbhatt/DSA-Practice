#include<iostream>
using namespace std;

int main()
{
    int marks[] = {1,2,3,4,5};

    int length = sizeof(marks)/sizeof(int);

    for(int idx=0; idx < length; idx++){
        cout<<marks[idx]<<endl;
    }

    return 0;
}