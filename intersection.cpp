#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,3,2,4};
    int arr[]={5,2,2,5,2,6};
    unordered_map<int,int>mp;
    for(int x:array){
        mp[x]++;
    }
    for(int x:arr){
        if(mp.count(x) && mp[x]>0){
            mp[x]--;
            cout<<x<<" ";
        }
    }
}