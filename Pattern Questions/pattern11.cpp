#include<iostream>
using namespace std;

int main(){


  /*

  A B C
  A B C
  A B C

  */

  int n;
  cin>>n;


  for(int i =1;i<=n;i++){
    char ascii = 'A';
    for(int j=1;j<=n;j++){
      cout<<ascii<<" ";
      ascii+=1;

    }
    cout<<endl;
  }
}
