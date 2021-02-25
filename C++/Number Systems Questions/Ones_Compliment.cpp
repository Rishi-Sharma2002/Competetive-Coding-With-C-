#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int ones(int n)
{
  int rem, ans= 0;
  if(n<=1)
    ans = !n;
    return 0;
  rem = n%2;
  ones(n/2);
  ans = !rem;
}

int main(){
 int n;
 cout<<endl<<"Enter the number: ";
 cin>>n;
  int ans=0;
  ans = ones(n);
  cout<<endl<<"The ans is: "<<ans;
  return 0;}

