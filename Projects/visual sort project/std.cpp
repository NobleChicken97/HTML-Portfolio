
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
  int arr[] = {2,4,1,22,54,11};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<n-1; i++){
    for(int j = i+1 ; j < n; j++){
        if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        }

    } 
  }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<endl;
    }
  
    return 0 ;
}

