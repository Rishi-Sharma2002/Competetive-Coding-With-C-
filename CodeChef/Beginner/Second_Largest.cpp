#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void second_largest(int a, int b, int c)
{
  if((a>b)&&(a<c)||(a<b)&&(a>c))
    cout<<a;
  
  else if((b>a)&&(b<c)||(b<a)&&(b>c))
    cout<<b;

  else if((c>b)&&(c<a)||(c<b)&&(c>a))
    cout<<c;
}

int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int A, B, C;
    cin>>A>>B>>C;
    second_largest(A, B, C);
    cout<<endl;
  }



  return 0;}

