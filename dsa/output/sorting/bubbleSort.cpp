#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didSwap =0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            didSwap =1;
        }
        if(didSwap =0){
            break;
        }

    }
}

int main(){
      int n;
    cin>>n;
    int arr[n];
  
    
    // size of command tells how many bits have been occupied and for one integral value it is 4 bits thatst why we are dividing by 4;
for(int i=0;i<n ;i++) cin>>arr[i];

bubbleSort(arr,n);

for(int i=0;i<=n-1;i++)
    cout<<arr[i]<<" ";

return 0;


}