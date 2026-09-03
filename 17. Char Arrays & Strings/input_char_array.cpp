#include <iostream>
using namespace std;

int main(){

    char str[50];

    cin.getline(str,50);
    cout<<"your word is : "<<str;
    cout<<"length is : "<<strlen(str);

    return 0;
}