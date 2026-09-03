#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // char str1[100];
    // char str2[100];

    // strcpy(str1,"hello");
    // strcpy(str2,str1);
    // cout<<str2<<endl;

    char str1[] = "hello ";
    char str2[] = "world";

    strcat(str1,str2);
    cout<<str1<<endl;

    return 0;
}