#include <iostream>
using namespace std;

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}

int main() {

    int arr[] = {1,2,3,4,5};

    int n = 5;

    int start = 0;
    int end = n-1;

    while(start<end){

        //swap first and last element
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;

    }

    cout<<"Reverse array = "<<printArr(arr,n)<<endl;

    return 0;
}