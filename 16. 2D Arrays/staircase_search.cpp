#include<iostream>
using namespace std;

bool staircaseSearch(int arr[][4],int n,int m,int key){
    int row=0;
    int col=m-1;

    while(row<n && col>=0){
        if(arr[row][col]==key){
            cout<<"found key at "<<row<<","<<col<<endl;
            return true;
        }else if(arr[row][col]>key){ //left
            col--;
        }else{ //down
            row++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}

int main(){

    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

    staircaseSearch(arr,4,4,33);

    return 0;
}