#include<iostream>
using namespace std;

class Student{
    string name;

public:
    string getName(){
        return name;
    }

    void setName(string nameVal){
        name = nameVal;
    }
};

int main(){

    Student s1;
    s1.setName("Pragun");
    cout<<s1.getName();


    return 0;
}