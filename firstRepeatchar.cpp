#include<iostream>
#include<map>
using namespace std;
int main(){
    int array[]={1,2,3,4,3,6,7,5,4,5,4,6,7,9};
    map<int,int>s;
    for(int x:array){
        s[x]++;
    }
    for(auto it:s){
        if(it.second>=2){
            cout<<it.first;
            break;
        }
    }
    return 0;
}