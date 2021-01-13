#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int t, k, flag=0;
  cin>>t>>k;
  while(t--)
  {int n;
  cin>>n;
  if(n%k==0)
    flag++;
    }
    cout<<flag;



  return 0;}

