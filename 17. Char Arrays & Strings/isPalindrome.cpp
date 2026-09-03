#include <iostream>
using namespace std;

bool isPalidrome(char word[],int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        if(word[start]!=word[end]){
            cout<<"Not valid Paindrome";
            return false;
        }
        start++;
        end--;
    }
    cout<<"Valid Palindrome";
    return true;
}

int main(){

    char word[] = "racecar";
    isPalidrome(word,strlen(word));

    return 0;
}