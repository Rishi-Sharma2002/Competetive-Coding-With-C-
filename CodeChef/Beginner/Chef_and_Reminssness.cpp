#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int A, B;
    cin>>A>>B;
    if(A>B)
      cout<<A<<" ";
    else if(A<B)
      cout<<B<<" ";
    cout<<A+B<<endl;
  }



  return 0;}

