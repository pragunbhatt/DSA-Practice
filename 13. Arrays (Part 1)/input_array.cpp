#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    int n = sizeof(marks)/sizeof(int);

    for(int i=0;i<n;i++){
        cin>>marks[i];    
    }

    for(int idx=0; idx < n; idx++){
        cout<<marks[idx]<<endl;
    }

    cout<<marks[2];

    return 0;
}