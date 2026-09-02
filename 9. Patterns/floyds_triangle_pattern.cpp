#include<iostream>
using namespace std;

int main()
{
    int dig = 1;
    int n= 4;

    for(int i=1;i<=n;i++){

        for(int j =1;j<=i;j++){
            cout<<dig<<" ";
            dig++;
        }

        cout<<endl;

    }

    return 0;
}