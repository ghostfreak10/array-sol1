#include <iostream> 
using namespace std;

void SumAvg(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"the sum is "<<sum<<endl;
    cout<<"the average is "<<(float)sum/n<<endl;
}

int main(){
     int arr[6]={10,28,31,42,51,69};
    int size=sizeof(arr)/sizeof(int);
    SumAvg(arr,size);
    return 0;
}