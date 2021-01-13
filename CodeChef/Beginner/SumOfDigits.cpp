#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int t, n, rem, sum=0;
  cin>>t;
  while(t--){
    cin>>n;
    while(n>0){
      rem = n%10;
      sum += rem;
      n = n/10;}
      cout<<sum<<endl;
      sum = 0;}

  return 0;}

