#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,4,5,3,6,6,5,43,35};
    unordered_map<int,int>mp;
    int count=0;
    for(int x:array){
        mp[x]++;
    }
    for(auto it:mp){
        count++;
    }
    cout<<"no. of distinct elements are "<<count;
}