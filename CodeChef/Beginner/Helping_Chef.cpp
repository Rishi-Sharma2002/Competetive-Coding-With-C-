#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int N;
    cin>>N;
    if(N<10)
      cout<<"Thanks for helping Chef!"<<endl;
    if(N>=10)
      cout<<"-1"<<endl;
  }



  return 0;}

