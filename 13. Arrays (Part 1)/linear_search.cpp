#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;

}

int main(){
    int marks[] = {86,84,92,98,33};

    cout<<linearSearch(marks,5,989);
    
    return 0;
}