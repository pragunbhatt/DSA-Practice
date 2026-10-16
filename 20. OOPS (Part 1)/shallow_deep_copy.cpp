#include<iostream>
using namespace std;

class Car{
public:

    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 10;
    }

    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

};

int main(){
    Car c1("Maruti","Blue");
    Car c2(c1);

    c2.name = "Mercedes";
    cout<<c1.name<<endl;

    *c2.mileage = 12;
    cout<<*c1.mileage<<endl;

    return 0;
}