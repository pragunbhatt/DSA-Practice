#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> vec,int target,int i){

    if(i == vec.size()){ //base case
        return -1;
    }

    if(vec[i] == target){ //kaam
        return i;
    }
    return firstOccurence(vec,target,i+1); //bharosa
}

int main(){

    vector<int> arr = {1,2,3,3,3,4};
    cout<<firstOccurence(arr,3,0);

    return 0;
}