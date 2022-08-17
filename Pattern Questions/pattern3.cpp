#include<iostream>
using namespace std;

int main(){


  /*

  1 1 1
  2 2 2
  3 3 3


  */

  int rows;
  int columns;
  cin>>rows>>columns;

  for(int i =1;i<=rows;i++){
    for(int j=1;j<=columns;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
