#include <iostream>
using namespace std;

int main(){
    
    int size;
    cin>>size;

    int *arr = new int[size];
    
    for(int i=0;i<size;i++){
        arr[i] = i+1;
        cout<<arr[i]<<" ";
    }

    return 0;
}