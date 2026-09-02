#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,23,2,54,98,22,99};

    int n = sizeof(arr)/sizeof(int);

    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout<<"largest = "<<largest<<endl;
    cout<<"smallest = "<<smallest<<endl;

    return 0;
}