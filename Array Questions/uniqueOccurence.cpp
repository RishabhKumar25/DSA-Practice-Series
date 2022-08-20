#include<iostream>
using namespace std;


/*

  I/P = {1,2,3,6,3,6,2}
  O/P = 1

  Explanation : 1 is present only once in the array


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

  int arr1[n];
  int m;


  for(int i =0;i<n;i++){
    int count = 1;
    for(int j =i+1;j<n;j++){
      if(arr[i]==arr[j]){
        count++;
      }
      arr1[i] = count;
      m =i;

    }
  }

  //cout<<m-1;

  cout<<"Occurence are : "<<endl;
  for(int i =0;i<(m-1);i++){
    cout<<arr1[i]<<" ";
  }
  cout<<endl;

  int ans = 1;

  for(int i =0;i<(m-1);i++){
    ans = ans^arr1[i];
  }

  if(ans == 1){
    cout<<endl<<" "<<"true";
  }else{
    cout<<endl<<" "<<"false";
  }




}
