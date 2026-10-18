#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){
    
    if(i == n-1){ //base case
        return true;
    }

    if(arr[i]>arr[i+1]){ //kaam
        return false;
    }

    return isSorted(arr,n,i+1); //bharosa

}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<isSorted(arr,5,0)<<endl;

    return 0;
}