#include<iostream>

using namespace std;

void binary(int n, int a[100])
{
  int search;
  cout<<endl<<"Enter the element which you want to search: ";
  cin>>search;
  int first = 0, last = n-1;

  while(first<=last)
  {
    int mid = (first+last)/2;
    if(a[mid] == search)
      {cout<<endl<<"Element is found at index: "<<mid+1;break;}

    if(search > a[mid])
     first = mid+1;
    else
      last = mid -1;
  }
}

int main(){
  int n, a[100];
  cout<<"-------Binary Search------";
  cout<<endl<<endl<<"Enter the size of array: ";
  cin>>n;
  cout<<endl<<"Enter the elements: ";
  for(int i=0; i<n; i++)
    cin>>a[i];

  binary(n, a);


  return 0;}

