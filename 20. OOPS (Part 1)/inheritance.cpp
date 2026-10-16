#include<iostream>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout<<"eats"<<endl;
    }

    void breathes(){
        cout<<"breaths"<<endl;
    }
};

class Fish: public Animal{
public:
    int fins;

    void swim(){
        cout<<"Swims"<<endl;
    }

};

int main(){

    Fish f1;
    f1.fins = 4;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathes();

    return 0;
}