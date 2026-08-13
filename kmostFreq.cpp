#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>array = {1,1,2,2,2,3};
    int k=2;
    unordered_map<int,int>mp;
    for(int x:array){
        mp[x]++;
    }
    for(auto it:mp){
        if(it.second>=k){
            cout<<it.first<<" ";
        }
    }
    return 0;
}