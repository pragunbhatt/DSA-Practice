#include<iostream>
using namespace std;

int main()
{
    int n = 10;

    for(int i=1;i<=n;i++){

        int temp2 = 2;

        for(int j=1;j<=(n-i);j++){
            cout<<" "<<" ";
        }

        for(int temp= i; temp>=1;temp--){
            cout<<temp<<" ";
        }

        for(int k=1;k<=(i-1);k++){
            cout<<temp2<<" ";
            temp2++;
            
        }

        cout<<endl;
        

    }

    return 0;
}