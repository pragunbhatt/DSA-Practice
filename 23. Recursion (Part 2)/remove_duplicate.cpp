#include<iostream>
using namespace std;

void removeDuplicates(string str, string ans, int i, bool map[]){

    if(i == str.size()){
        cout<<ans<<endl;
        return;
    }


    char ch = str[i];
    int mapIdx = ch - 'a'; //position

    if(map[mapIdx]==true){
        removeDuplicates(str,ans,i+1,map);
    }else{
        map[mapIdx] = true;
        removeDuplicates(str,ans+ch,i+1,map);
    }
}

int main(){

    string str = "appnnacollege";
    string ans = "";
    bool map[26] = {false};

    removeDuplicates(str,ans,0,map);

    return 0;
}