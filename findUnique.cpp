#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,3,4,3,2,6,7,5,2,4,5,4,6,7,9};
    unordered_map<int,int>s;
    for(int a:array){
        s[a]++;
    }
    for(auto it:s){
        if(it.second == 1)
        cout<<it.first<<" ";
    }
    return 0;
}