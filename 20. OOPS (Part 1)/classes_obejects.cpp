#include<iostream>
using namespace std;

class Student{
    string name;
    int cgpa;

    void getPercentage(){
        cout<<cgpa * 10<<" %"<<endl;
    }
};

int main(){

    Student s1;
    cout<<sizeof(s1);

    return 0;
}