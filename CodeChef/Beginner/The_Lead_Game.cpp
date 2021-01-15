#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int T;
  cin>>T;
  int W[10], L[10], p1, p2;
  int i = 0;
  while(T--)
  {
   cin>>p1>>p2;
    W[i] = p1 - p2;
    if(p1>p2)
      L[i] = 1;
    else
      L[i] = 2;
    i++;
  }
  int max = W[0], player = L[0];
  for(int i=0;W[i]!=0; i++)
  {
    if(W[i]>max)
    { 
      max = W[i];
      player = i;
    }
  }
  cout<<player<<" "<<max;



  return 0;}

