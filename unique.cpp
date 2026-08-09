#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int array[]={1,2,3,4,3,2,6,7,5,2,4,5,4,6,7,9};
    int n=sizeof(array)/sizeof(array[0]);
    sort(array,array+n);
    int size = unique(array,array+n)-array;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}