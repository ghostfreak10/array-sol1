#include <iostream> 
using namespace std;

void printarry(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void copyelement(int *arr1,int *arr2,int n){
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
}

int main(){
    int arr1[6]={10,28,31,42,51,69};
    int arr2[6];
    int size=sizeof(arr1)/sizeof(int);
    copyelement(arr1,arr2,size);
    printarry(arr2,size);
    return 0;
}