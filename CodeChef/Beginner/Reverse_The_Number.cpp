#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int N, rev=0, rem=0;
    cin>>N;
    while(N>0)
    {
      rem = N%10;
      rev = rev*10 + rem;
      N /= 10;
    }
    cout<<rev<<endl;
  }

  return 0;}

