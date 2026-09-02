#include <iostream>
using namespace std;

void diagnolSum(int arr[][3],int n){

    int sum=0;

    for(int i=0;i<n;i++){
        sum+= arr[i][i];
        if(i != (n-i-1)){
            sum+= arr[i][n-i-1];
        }
    }

    cout<<sum;

}

int main(){

    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    diagnolSum(matrix,3);

    return 0;
}