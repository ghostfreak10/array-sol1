#include <iostream> 
using namespace std;

void findMaxMin(int *arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum element in the array is "<<max<<endl;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the min element in the array is "<<min<<endl;
}

int main(){
    int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    findMaxMin(arr,size);
    return 0;
}