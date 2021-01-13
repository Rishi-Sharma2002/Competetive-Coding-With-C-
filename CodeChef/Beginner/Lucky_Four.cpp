#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int N, four=0, rem=0;
    cin>>N;
    while(N>0)
    {
      rem = N%10;
      N = N/10;
      if(rem == 4)
	four++;
    }
    cout<<four<<endl;
  }



  return 0;}

