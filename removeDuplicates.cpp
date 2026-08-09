#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>ans;
    int array[]={1,2,3,4,3,2,6,7,5,2,4,5,4,6,7,9};
    int n=sizeof(array)/sizeof(array[0]),i,a;
    sort(array, array+n);
    a=array[0];
    ans.push_back(a);
    for(i=0;i<n;i++){
        if(array[i]==a)
        continue;
        else{
            a=array[i];
            ans.push_back(a);
        }
    }
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}