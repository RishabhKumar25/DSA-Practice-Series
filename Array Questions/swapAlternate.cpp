#include<iostream>
using namespace std;


int main(){
  int arr[10];
  int n;
  cin>>n;

  for(int i =0;i<n;i++){
    cin>>arr[i];
  }

  for(int i =0;i<n;i+=2){
    int temp;

    if(i+1<n){

    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;

  }

  }

  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
