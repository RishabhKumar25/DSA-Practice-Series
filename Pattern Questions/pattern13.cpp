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
  for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
      char ascii = 'A'+i+j-2;
      cout<<ascii<<" ";
    }
    cout<<endl;
  }
}
