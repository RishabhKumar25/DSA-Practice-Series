#include<iostream>
using namespace std;

int main(){


  /*

  A B C
  B C D
  C D E

  */

  int n;
  cin>>n;
  char ascii = 'A';

  for(int i =1;i<=n;i++){
    ascii = ascii-1;
    for(int j=1;j<=n;j++){
      cout<<(ascii+i-1)<<" ";
      ascii+=1;
    }
    cout<<endl;
  }
}
