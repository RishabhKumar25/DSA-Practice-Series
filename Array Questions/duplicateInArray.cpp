#include<iostream>
using namespace std;


/*

  I/P = {4,2,1,3,1}
  O/P = 1

  Explanation : 1 is present twice


*/


int main(){
  int arr[10];
  int n;
  cin>>n;


  //input of elements in array
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }


  //display the elements of array
  cout<<"Array elements are : "<<endl<<endl;
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }



  int ans = 0;

  for(int i =0;i<n;i++){
    ans = ans^arr[i];
  }

  for(int i = 0;i<n;i++){
    ans = ans^i;
  }

cout<<endl<<ans;




}
