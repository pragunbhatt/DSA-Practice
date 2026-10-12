#include<iostream>
using namespace std;

class Student{

private:
    int id;

public:
    string name;
    int cgpa;

    void getPercentage(){
        cout<<cgpa * 10<<" %"<<endl;
    }
};

int main(){

    Student s1;
    s1.name = "Pragun";
    s1.cgpa = 9;
    cout<<s1.name<<endl;
    s1.getPercentage();

    return 0;
}