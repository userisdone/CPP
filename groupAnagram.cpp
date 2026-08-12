#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<string> words={"eat","tea","ate","tan","nat","bat"};
   unordered_map<string,vector<string>>mp;
   for(string s:words){
    string key = s;
    sort(key.begin(),key.end());
    mp[key].push_back(s);
   }
   for(auto it:mp){
    for(string s:it.second){
       cout<<s<<" ";
    }
    cout<<endl;
   }

}