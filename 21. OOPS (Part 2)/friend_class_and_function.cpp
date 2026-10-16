#include<iostream>
using namespace std;

class A{
    string secret = "secret message";
    friend class B;
    friend void revealSecret(A &obj);
    
};

class B{
public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a;
    B b;
    b.showSecret(a);
    revealSecret(a);

    return 0;
}