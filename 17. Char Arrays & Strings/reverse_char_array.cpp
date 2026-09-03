#include <iostream>
using namespace std;

void reverse(char word[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
}

int main(){

    char word[] = "code";
    int n = strlen(word);

    reverse(word,n);
    cout<<word<<endl;

    return 0;
}