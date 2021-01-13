#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int first, last, N;
    cin>>N;
    last = N%10;
    while(N>0)
    {
      first = N%10;
      N = N/10;
    }
  cout<<first+last<<endl;
  }

  return 0;}

