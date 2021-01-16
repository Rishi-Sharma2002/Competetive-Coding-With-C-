#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int t, count=0;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    
    while(n>0)
    {
      if(n>=100)
      {
	count++;
	n = n-100;
      }

      else if(n>=50)
      {
	count++;
	n = n-50;
      }

      else if(n>=10)
      {
	count++;
	n = n-10;
      }
      else if(n>=5)
      {
	count++;
	n = n-5;
      }

      else if(n>=2)
      {
	count++;
	n = n-2;
      }
      else if(n>=1)
      {
	count++;
	n = n-1;
      }
   }
   cout<<count<<endl;
   count=0;
  }
  return 0;}

