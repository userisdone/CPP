#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
   int array[]={1,2,2,3,4,5,6};
   int arr[]={1,2,3,4,5,6};
   unordered_map<int,int>mp;
   vector<int>ans;
   int t=1;
   for(int c:array){
    mp[c]++;
   } 
   for(int x:arr){
    mp[x]--;
   }
   for(auto it:mp){
    if(it.second!=0){
        cout<<"arry is not equal";
        t=0;
    }
   }
   if(t==1){
    cout<<"arrays are equal";
   }
}
