#include <bits/stdc++.h>
using namespace std;


int main() {
  int a , b;
  cin >> a>>b;
  int arr[a];
  int c =0;
  for(int i = 0 ; i< a; i++)
  {
    cin >>arr[i];
  }
  for(int i = 0 ; i< a; i++)
  {
    if(arr[i] >= arr[b-1] && arr[i]>0)
    {
      c++;
    }
  }
  cout << c;
 
}