#include <bits/stdc++.h>
using namespace std;


int main() {
  int p =0 ;
  int q =0 ;

 for(int i = 0 ; i< 5 ; i++)
 {
  for(int j = 0 ; j <5 ; j++)
  {
    int a ;
    cin >> a;
    if(a == 1)
    {
        p = i+1 ;
        q = j+1;
    }
  }
 }
 cout << abs(p-3) + abs(q-3) ;
 
}