#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> numbers = {2,7,11,15};
    int n = numbers.size();
    int target = 9;

    int start = 0;
    int end = n-1;


    while(start<end){
        int currSum = numbers[start] + numbers[end];

        if(currSum == target){
            cout<<"Ans : "<<start<<" , "<<end<<endl;
            break;
        }else if(currSum>target){
            end--;
        }else{
            start++;
        }
    }

    return 0;
}