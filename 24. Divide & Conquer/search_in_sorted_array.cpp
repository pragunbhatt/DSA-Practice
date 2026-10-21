#include<iostream>
using namespace std;

int search(int arr[],int target,int si,int ei){
    int mid = (si+ei)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid]>=arr[si]){
        if(target>=arr[si] && target<arr[mid]){
            return search(arr,target,si,mid-1);
        }else{
            return search(arr,target,mid+1,ei);
        }
    }else{
        if(target<=arr[ei] && target>arr[mid]){
            return search(arr,target,mid+1,ei);
        }else{
            return search(arr,target,si,mid-1);
        }
    }
}

int main(){

    int arr[] = {4,5,6,7,0,1,2};
    
    cout<<search(arr,0,0,6)<<endl;

    return 0;
}