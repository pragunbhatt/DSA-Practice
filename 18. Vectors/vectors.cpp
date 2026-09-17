#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec1;
    vec1 = {1,2,3,4};

    vector<int> vec2(5,-1);

    cout<<vec1.size();

    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;

    return 0;
}