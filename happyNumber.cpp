#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>seen;
    int num,m,res=0;
    cout<<"Enter a number to find if it's happy number";
    cin>>num;
    seen[num]++;
    while(res!=1){
        res=0;
        while(num>0){
        m=num%10;
        res+=m*m;
        cout<<res<<" ";
        num=num/10;   
        } 
        num=res;
        if(seen.count(num)){
            cout<<"not a happy number";
            return 0;
        }
        seen[num]++;
    }
    cout<<"it's a happy number";
    return 0;
}