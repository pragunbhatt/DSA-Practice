#include <iostream>
#include <string>
using namespace std;

int main(){

    string line = "hello world I love coding in c++ and c++, also i know c++";

    cout<<line.length()<<endl;
    cout<<line.at(4)<<endl;
    cout<<line.substr(12,13)<<endl;
    cout<<line.find("c++")<<endl;
    cout<<line.find("c++",30)<<endl;
    cout<<line.find("kotlin")<<endl;

    return 0;
}