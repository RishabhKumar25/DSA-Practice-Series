#include<iostream>
using namespace std;

int main(){


  /*

  D
  C D
  B C D
  A B C D

  */

  int n;
  cin>>n;
  for(int i =1;i<=n;i++){
    char start = ('A'+n-i);

    for(int j=1;j<=i;j++){
      cout<<start<<" ";
      start+=1;
    }
    cout<<endl;
  }
}
