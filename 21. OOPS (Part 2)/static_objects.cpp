#include<iostream>
using namespace std;

class Example{
public:

    Example(){
        cout<<"Constructer called"<<endl;
    }

    ~Example(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    int a = 0;
    if(a==0){
        static Example eg1;
    }
    cout<<"code ending"<<endl;
    return 0;
}