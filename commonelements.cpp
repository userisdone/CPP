#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    int array[] = {1, 2, 3, 2, 1, 4, 3, 2};
    int arr[]={1,4,3,5,3,6,7,54};
    unordered_map<int,int>mp;
    for(int x:array){
        mp[x]++;
    }
    for(int s:arr){
        // int n = mp[s];
        // mp[s]--;
        // if(n!=0 && n!=mp[s])
        if(mp[s]>0)
        cout<<s<<" ";
    }
    return 0;
}