#include<iostream>
using namespace std;

int main(){


  /*

  A B C
  D E F
  G H I

  */

  int n;
  cin>>n;

  char ascii = 'A';
  for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<ascii<<" ";
      ascii+=1;

    }
    cout<<endl;
  }
}
