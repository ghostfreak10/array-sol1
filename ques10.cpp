#include <iostream> 
using namespace std;

void findSecondlargest(int *arr,int n){
    int largest,secondlarge=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            secondlarge=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlarge){
            secondlarge=arr[i];
        }
    }
    cout<<"the second largest element in the array is "<<secondlarge<<endl;
}

int main(){
     int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    findSecondlargest(arr,size);
    return 0;
}