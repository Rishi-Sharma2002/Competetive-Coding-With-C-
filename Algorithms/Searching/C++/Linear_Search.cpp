#include<iostream>

using namespace std;

void linear(int n, int a[100]){
  int search;
  cout<<endl<<"Enter the element you want to search: ";
  cin>>search;
  for(int i=0; i<n; i++)
    if(a[i] == search)
      cout<<endl<<"Element found at index: "<<i+1;
  }

int main(){
  int n, a[100];
  cout<<"----------Linear Search---------"<<endl;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0; i<n; i++)
    cin>>a[i];

  linear(n, a);

  return 0;}

