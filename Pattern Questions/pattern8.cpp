#include<iostream>
using namespace std;

int main(){


  /*

  1
  2 3
  3 4 5
  4 5 6 7

  */

  int n;
  cin>>n;

  //int count = 1;

  for(int i =1;i<=n;i++){
    int count = i;
    for(int j=1;j<=i;j++){
      cout<<count++<<" ";
    }
    cout<<endl;
  }
}
