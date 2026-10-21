#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int startIdx, int endIdx){
    vector<int> temp;

    int mid = (startIdx+endIdx) / 2;
    int i = startIdx;
    int j = mid+1;

    while(i<=mid && j<=endIdx){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=endIdx){
        temp.push_back(arr[j++]);
    }

    for(int i=startIdx,x=0;i<=endIdx;i++){
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[],int startIdx,int endIdx){

    if(startIdx>=endIdx){
        return;
    }

    int mid = (startIdx+endIdx)/2;
    mergeSort(arr,startIdx,mid);
    mergeSort(arr,mid+1,endIdx);

    merge(arr,startIdx,endIdx);

}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;

    mergeSort(arr,0,n-1);
    printArray(arr,6);


    return 0;
}