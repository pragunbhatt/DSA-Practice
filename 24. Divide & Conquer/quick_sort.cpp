#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){

    int pivot = ei;
    int i = si-1;
    int j = si;

    while(j<ei){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);

    return i;

}

void quickSort(int arr[],int si,int ei){

    if(si>=ei){
        return;
    }

    int pivotIdx = partition(arr,si,ei);
    
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}

void printArr(int arr[], int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){

    int arr[6] = {6,3,7,5,2,4};
    int n = 6;

    quickSort(arr,0,n-1);
    printArr(arr,n);

    return 0;
}