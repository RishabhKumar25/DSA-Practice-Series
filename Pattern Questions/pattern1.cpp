#include<iostream>
using namespace std;

int main(){


/*

	1 2 3 4
	1 2 3 4
	1 2 3 4
	1 2 3 4


*/
int row,columns;
cin>>row>>columns;

for(int i=1;i<=row;i++){
  for(int j=1;j<=columns;j++){
    cout<<j<<" ";
  }
  cout<<endl;
}

}
