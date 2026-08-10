#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,3,5,4,5,35,46,34,6,4};
    unordered_map<int,int>mp;
    for(int x:array){
        mp[x]++;
    }
    cout<<"duplicates are";
    for(auto it:mp){
        if(it.second>1){
            cout<<" "<<it.first;
        }
    }
}
