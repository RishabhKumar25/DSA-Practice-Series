#include<iostream>
using namespace std;

int main(){


  /*

  1
  2 1
  3 2 1
  4 3 2 1

  */

  int n;
  cin>>n;

  //int count = 1;

  for(int i =1;i<=n;i++){
    int count = i;
    for(int j=1;j<=i;j++){
      cout<<i-j+1<<" ";
    }
    cout<<endl;
  }
}
