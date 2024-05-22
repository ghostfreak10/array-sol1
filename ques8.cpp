#include <iostream> 
using namespace std;

void countEvenOdd(int *arr,int n){
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"total even element in the array are "<<evencount<<endl;
    cout<<"total odd element in the array are "<<oddcount<<endl;
}

int main(){
    int arr[6]={10,28,38,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    countEvenOdd(arr,size);
    return 0;
}