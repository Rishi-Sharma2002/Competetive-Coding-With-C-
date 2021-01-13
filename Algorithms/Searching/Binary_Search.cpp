#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Binary_Search(int arr[10], int n)
{
  int search;
  cout<<"\nEnter element you want to search:- ";
  cin>>search;
  int start = arr[0], end=arr[n-1], mid;

  while(start<=end)
  { mid = (start+end)/2;
    if(mid == search)
      {cout<<"\nElement is found at index "<<mid;
       break;
      }
    if(search<mid)
      end = mid-1;
    if(search>mid)
      start = mid+1;
  }
}

int main(){
int n, arr[10];
cout<<"-------BINARY SEARCH-------"<<endl;
cout<<"Enter the size of the array:- ";
cin>>n;
cout<<"\nEnter the array:- ";
for(int i=0;i<n;i++)
  cin>>arr[i];
Binary_Search(arr, n);

  return 0;}

