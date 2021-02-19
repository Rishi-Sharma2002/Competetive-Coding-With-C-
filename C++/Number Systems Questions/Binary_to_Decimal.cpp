#include<iostream>
#include<math.h>

using namespace std;

int decimal(int n)
{
  int answer = 0, power = 0;
  while(n>0)
  {
    if(n%10 == 1)
      answer = answer + pow(2, power);
    power++;
    n /=10;
  }
  return answer;
}

int main(){
  int n;
  cout<<endl<<"Enter the binary number: ";
  cin>>n;
  int dec = decimal(n);
  cout<<endl<<"The Decimal Number representing this is: "<<dec;

  return 0;}

