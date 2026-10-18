#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int> vec,int target,int i){

    if(i == vec.size()){ //base case
        return -1;
    }

    int idx = lastOccurence(vec,target,i+1);

    if(idx == -1 && vec[i] == target){
        return i;
    }
    return idx;
}

int main(){

    vector<int> arr = {1,2,3,3,3,4};
    cout<<lastOccurence(arr,3,0);

    return 0;
}