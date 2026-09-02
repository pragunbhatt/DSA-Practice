//Print Numbers from n-1 using for loop
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=0; i<=n; i++){
        cout<<n-i<<" ";
    }


    return 0;
}