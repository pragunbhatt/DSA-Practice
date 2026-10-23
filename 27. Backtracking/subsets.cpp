#include<iostream>
using namespace std;

void subsets(string str,string ans,int i){

    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }

    subsets(str,ans+str[i],i+1);
    subsets(str,ans,i+1);

}

int main(){
    string str = "abc";
    subsets(str,".",0);
    return 0;
}