#include<iostream>
#include<string>

using namespace std;

int main(){
  char a[10];
  cin>>a;
  int i=0;
  for(i=0;a[i+1]!='\0' ; i++)
  {
    int diff = a[i+1]-a[i];
    cout<<a[i]<<diff;
  }
  cout<<a[i];


  return 0;}

