#include <iostream>
using namespace std;

void maxSubarraySum(int arr[],int n){

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int start=0;start<n;start++){
        currSum += arr[start];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(maxSum,currSum);
    }

    cout<<"Maximum Subarray Sum : "<<maxSum;

}

int main(){

    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr,n);

    return 0;
}