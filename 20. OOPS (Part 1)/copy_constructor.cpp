#include<iostream>
using namespace std;

class Car{
public:

    string name;
    string color;

    Car(string name, string color){
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout<<"Copy Constructor called"<<endl;
        name = original.name;
        color = original.color;
    }
};

int main(){

    Car c1("Maruti","blue");
    Car c2(c1);
    cout<<c2.name<<" "<<c2.color<<endl;

    return 0;
}