#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int a = 10;
    char b = '@';
    bool c = true;
    float PI = 3.141592625359;
    double PI2 = 3.141592625359;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<setprecision(12)<<PI<<endl;
    cout<<setprecision(12)<<PI2<<endl;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(PI)<<endl;
    cout<<sizeof(PI2)<<endl;

    return 0;
}