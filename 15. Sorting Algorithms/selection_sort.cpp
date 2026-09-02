#include <iostream>
using namespace std;

void printArr(int arr[],int n){

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }

}

void selectionSort(int arr[],int n){

    for (int i=0;i<n-1;i++){

        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }

    }

    printArr(arr,n);

}

int main(){

    int arr[] = {2,5,4,1,3,2};
    int n= sizeof(arr)/sizeof(int);

    selectionSort(arr,n);

}