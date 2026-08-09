#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,3,32,54,5,3,24,32,43,2,3,24,3,35};
    unordered_map<int,int>mp;
    for(int x:array){
        mp[x]++;
    }
    int freq=0,num;
    for(auto it:mp){
        if(it.second>freq){
            freq=it.second;
            num=it.first;
        }
    }
    cout<<"most frequent element is "<<num<<" and "<<freq<<" times";
}