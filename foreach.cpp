#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[8]={1,86,3,2,5,65,4,3};
    sort(array,array+8);
    for(int x:array){
        cout<<x<<" ";
    }
    return 0;
}

