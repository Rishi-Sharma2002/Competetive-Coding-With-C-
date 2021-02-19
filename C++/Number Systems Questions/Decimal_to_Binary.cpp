#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binary(int n)
{
  int bin=0;
  while(n>0)
  {
    bin = bin*10;
    bin = bin + n%2;
    n /= 2;
  }
  return bin;
}

int main(){
  int n;
  cout<<endl<<"Enter the Decimal Number: ";
  cin>>n;
  int remainder=0, answer=0;
  int bin = binary(n);
  while(bin>0)
  {
    remainder = bin%10;
    answer = answer*10 + remainder;
    bin /= 10;
  }
  cout<<endl<<"Binary number of this is: "<<answer;
  return 0;}

