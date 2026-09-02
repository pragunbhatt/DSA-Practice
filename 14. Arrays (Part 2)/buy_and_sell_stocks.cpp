#include <iostream>
using namespace std;

void maxProfit(int prices[],int n){
    int bestBuy[n];

    bestBuy[0]=INT_MAX;

    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }

    int maxProfit = 0;

    for(int j=0;j<n;j++){
        int currProfit = prices[j]-bestBuy[j];
        maxProfit = max(maxProfit,currProfit);
    }

    cout<<maxProfit;

}

int main(){

    int prices[6]= {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices,n);

    return 0;
}