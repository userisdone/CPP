#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={2,7,11,15};
    unordered_map<int,int>mp;
    int target = 9;
    int arr[2];
    for(int i=0;i<4;i++){
        int x=target-array[i];
        if(mp.count(x)){
            arr[0] = i;
            arr[1] = mp[x];
            break;
        }
        mp[array[i]] = i;
    }
    cout<<arr[0]<<" "<<arr[1];
}