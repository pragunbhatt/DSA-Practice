#include<iostream>
using namespace std;

class Print{
public:
    void print(int a){
        cout<<a<<endl;
    }
    void print(string str){
        cout<<str<<endl;
    }

};

int main(){
    Print obj1;
    obj1.print(2);
    obj1.print("Pragun");
    return 0;
}