#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    int array[]={1,2,3,4,2,4,2,4};
    int n=sizeof(array)/sizeof(array[0]);
    int arr[]={1,2,2,4,4};
    unordered_set<int>st;
    st.insert(array,array+n);
    for(int x:arr){
        if(st.count(x)){
            st.erase(x);
            cout<<x<<" ";
        }
    }
}