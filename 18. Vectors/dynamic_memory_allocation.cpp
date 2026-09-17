#include <iostream>
using namespace std;

void func(){
    int size;
    cin>>size;

    int *ptr = new int[size];
    for(int i=0;i<5;i++){
        ptr[i] = i;
        cout<<ptr[i];
    }

    delete [] ptr;
    return;
}

int main(){

    func();

    return 0;
}