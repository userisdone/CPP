#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    string a="ate";
    string b="tea";
    int i=0;
    unordered_map<char,int>mpa;
    for(char c:a){
        mpa[c]++;
    }
    for(char c:b){
        mpa[c]--;
    }
    for(auto it:mpa){
        if(it.second!=0){
            cout<<"not anagram";
            return 0;
        }
    }
    cout<<"valid anagram";
}