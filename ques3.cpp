#include <iostream> 
using namespace std;

void array(int *arr,int n){
    cout<<"enter 5 elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    arr[3]=45;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    array(arr,size);
    return 0;
}