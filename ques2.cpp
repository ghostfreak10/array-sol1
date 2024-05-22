#include <iostream> 
using namespace std;

int main(){
    int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(i==0){
            cout<<" the first element in the array is "<<arr[i]<<endl;
        }
        else if(i==size-1){
            cout<<" the last element in the array is "<<arr[i]<<endl;
        }
    }
    return 0;
}