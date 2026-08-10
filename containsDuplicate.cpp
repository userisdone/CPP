#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int array[]={1,2,3,1};
    unordered_map<int,int>mp;
    int previdx=-1;
    for(int i=0;i<4;i++){
       if(mp.count(array[i])){
         previdx = mp[array[i]];
        if(i-previdx>0){
            cout<<i<<" "<<mp[array[i]];
        }
       }
       mp[array[i]]=i;
    }
}