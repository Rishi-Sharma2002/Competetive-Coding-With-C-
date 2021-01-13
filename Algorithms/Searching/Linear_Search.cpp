#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Linear_Search(int arr[10], int n)
{ int search;
  cout<<"\nEnter element you want to find:- ";
  cin>>search;
  for(int i=0;i<n;i++)
  {if(arr[i] == search)
    {cout<<"\nElement is found at position "<<i+1;break;}
    }
  }
int main(){
  int n, arr[10];
  cout<<"-----------LINEAR SEARCH-----------";
  cout<<"\nEnter the size of the array:- ";
  cin>>n;
  cout<<"\nEnter elements of the arrays:- ";
  for(int i=0;i<n;i++)
    cin>>arr[i];

  Linear_Search(arr, n);


  return 0;}

