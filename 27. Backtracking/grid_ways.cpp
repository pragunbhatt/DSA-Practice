#include<iostream>
using namespace std;

int gridWays(int r,int c, int n,int m){

    if(r==n-1 && c==m-1){
        return 1;
    }

    if(c>=m || r>=n){
        return 0;
    }

    int ans1 = gridWays(r,c+1,n,m);
    int ans2 = gridWays(r+1,c,n,m);

    return ans1+ans2;
}

int main(){

    

    return 0;
}