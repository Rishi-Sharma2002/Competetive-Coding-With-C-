#include<iostream>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int N, ans=1;
    cin>>N;
    while(N>0){
      ans *= N;
      N--;}
      cout<<ans<<endl;
      }

  return 0;}

