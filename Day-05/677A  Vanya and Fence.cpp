#include <bits/stdc++.h>
using namespace std;


int main() {
 int a , b ;
 cin>>a>>b;
 int x = 0;
 for(int i = 0 ; i<a ; i++ )
 {
  int  n ;
  cin>>n;
      if(n >b)x = x+2;
      else x++;
 }
cout <<x ;
}