#include<iostream>
using namespace std;

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}

int main()
{
    int arr[] = {1,2,3,4,5};

    int n = 5;

    int copyarr[n];

    for(int i=0;i<n;i++){
        copyarr[i]=arr[n-i-1];
    }

    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }

    cout<<"Reverse array = "<<printArr(arr,n);

    return 0;
}