#include<iostream>
using namespace std;


int main(){

  /*
  Given a signed 32-bit integer x, return x with its digits reversed.
  If reversing x causes the value to go outside the signed 32-bit
  integer range [-231, 231 - 1], then return 0.

  Example 1:

  Input: x = 123
  Output: 321

  Example 2:

  Input: x = -123
  Output: -321

  Example 3:

  Input: x = 120
  Output: 21

  */

  int x;
  cin>>x;

  int ans =0;

  while(x){
    int digit = x%10;
    ans = (ans*10)+digit;
    x = x/10;
  }

  cout<<ans;





















}
