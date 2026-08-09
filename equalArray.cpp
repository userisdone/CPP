#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
   int array[]={1,2,3,4,3,2,6,7,5,2,4,5,4,6,7,9};
   unordered_map<int,int>mp;
   vector<int>ans;
   for(int c:array){
    mp[c]++;
   } 
   for(auto it:mp){
    ans.push_back(it.first);
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
}
