#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s1,string s2){

    if(s1.length() != s2.length()){
        cout<<"Not Valid Anagram";
        return false;
    }

    int count[26] = {0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]-'a']++;
    }

    for(int i=0;i<s2.length();i++){
        if(count[s2[i]-'a']>0){
            count[s2[i]-'a']--;
        }else{
            cout<<"Not Valid Anagram";
            return false;
        }
    }

    cout<<"Valid Anagram";
    return true;

}

int main(){

    string s1 = "anagram";
    string s2 = "nagaram";

    isAnagram(s1,s2);

    return 0;
}