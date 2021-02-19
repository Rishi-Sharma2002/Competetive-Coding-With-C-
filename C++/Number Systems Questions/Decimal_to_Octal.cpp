#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int octal(int n)
{
  int answer = 0;
  while(n>0)
  {
    answer = answer * 10;
    answer = answer + n%8;
    n /= 8;
  }
  return answer;
}

int main(){
  int n;
  cout<<endl<<"Enter the number: ";
  cin>>n;
  int remainder=0, answer=0;
  int oct = octal(n);
  while(oct>0)
  {
    remainder = oct%10;
    answer = answer*10 + remainder;
    oct = oct/10;
  }

  cout<<endl<<"The answer is: "<<answer;
  return 0;}

