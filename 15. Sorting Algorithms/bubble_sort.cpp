#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=1;i<n;i++){

        bool isSwap = false;

        for(int j=0;j<(n-i);j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;

                isSwap = true ;

            }
        }

        if(!isSwap){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }

}

int main(){

    int arr[] = {5,4,3,2,2,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);

    return 0;
}