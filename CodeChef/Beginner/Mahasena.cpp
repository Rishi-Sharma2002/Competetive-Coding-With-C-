#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T, odd=0, even=0;
  cin>>T;
  while(T--)
  {
    int N;
    cin>>N;
    if(N%2==0)
      even++;
    else
      odd++;
  }
  if(odd>even)
    cout<<"NOT READY";
  else
    cout<<"READY FOR BATTLE";



  return 0;}

