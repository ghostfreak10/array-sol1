#include <iostream> 
using namespace std;

int linearsearch(int *arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}

int main(){
     int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    int target=40;
    if(linearsearch(arr,size,target)){
        cout<<target<<" is present in the array"<<endl;
    }
    else{
        cout<<target<<" is not present in the array"<<endl;
    }
    return 0;
}