#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"Eats"<<endl;
    }
    void breathes(){
        cout<<"Breathes"<<endl;
    }
};

class Mammal : public Animal{
public:
    string bloodType;
    Mammal(){
        bloodType = "warm";
    }
};

class Dog : public Mammal{
public:
    void wagTail(){
        cout<<"Dog wags it tail"<<endl;
    }
};

int main(){

    Dog d1;
    d1.eat();
    d1.breathes();
    d1.wagTail();
    cout<<d1.bloodType<<endl;

    return 0;
}