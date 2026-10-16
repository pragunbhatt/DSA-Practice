#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher, public Student{
public:
    string name;
    TA(int salary,string subject,int rollNo,float cgpa, string name){
        this->salary = salary;
        this->subject = subject;
        this->rollNo = rollNo;
        this->cgpa = cgpa;
        this->name = name;
    }
};

int main(){

    TA t1(100000,"Physics",12,9.35,"Tanishka");
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.rollNo<<endl;
    cout<<t1.cgpa<<endl;

    
    return 0;
}