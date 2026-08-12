#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    string a="care";
    string b="race";
    int i=0;
    unordered_map<char,char>mp;
    unordered_map<char,char>m;
    for(i=0;i<4;i++){
        if(mp.count(a[i]) && mp[a[i]]!=b[i]){
            cout<<"not valid anagram";
            return 0;
        }
        if(mp.count(b[i]) && mp[b[i]]!=a[i]){
            cout<<"not valid anagram";
            return 0;
        }
        mp[a[i]]=b[i];
        m[b[i]]=a[i];
    }
    cout<<"valid anagram";
}