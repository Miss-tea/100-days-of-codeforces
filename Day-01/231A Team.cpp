#include <bits/stdc++.h>
using namespace std;


int main() {
  int t ;
  cin >> t;
  int count = 0;
  while(t--)
  {
     int a , b , c;
     cin >>a>>b>>c;
      int cont = 0;
     if(a==1) cont++;
     if(b==1) cont++;
     if(c==1) cont++;
     if(cont>=2) count++;
   
 }
 cout << count;
}