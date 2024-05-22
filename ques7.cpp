#include <iostream> 
using namespace std;

void printarry(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reversearray(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}

int main(){
     int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    cout<<"array before reverse"<<endl;
    printarry(arr,size);
    cout<<"array after reverse"<<endl;
    reversearray(arr,size);
    printarry(arr,size);
    return 0;
}