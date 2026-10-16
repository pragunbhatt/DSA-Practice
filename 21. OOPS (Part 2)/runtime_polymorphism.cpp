#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent's show"<<endl;
    }
};

class Child: public Parent{
public:
    void show(){
        cout<<"Child's show"<<endl;
    }
};


int main(){
    Child c1;
    c1.show();

    return 0;
}
