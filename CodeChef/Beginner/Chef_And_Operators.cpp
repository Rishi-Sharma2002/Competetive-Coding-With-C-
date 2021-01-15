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
      cout<<">"<<endl;
    if(A<B)
      cout<<"<"<<endl;
    if(A==B)
      cout<<"="<<endl;
  }



  return 0;}

