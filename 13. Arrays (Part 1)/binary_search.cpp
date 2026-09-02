#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start=0;
    int end = n-1;

    while(start<=end){
        
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){//second half
            start = mid+1;
        }else{//first half
            end = mid-1;
        }

    }
    return -1;

}

int main(){

    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);

    cout<<binarySearch(arr,n,9);


    return 0;
}