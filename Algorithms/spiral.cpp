#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void spiral(int a[10][10], int m, int n)
{ int row = 0, column = 0;
//  while(row<=m && column<=n)
//  {
    for(int i=0; i<m; i++)
      cout<<a[row][i]<<" ";
    row++;
    for(int j=0; j<n; j--)
      cout<<a[j][n-column]<<" ";
    column++;
//    if(row<m)
//    {
//      for(int i=m-1; i>0; i++)
//	cout<<a[row][i]<<" ";
//      m--;
//    }

//  }
}

int main(){
  int m, n, a[10][10];
  cout<<"Enter the m and n:- ";
  cin>>m>>n;
  cout<<"\n Enter the matrix:- ";
  for(int i = 0; i<m; i++)
    for(int j=0; j<n; j++)
      cin>>a[i][j];
  spiral(a, m, n);


  return 0;}

