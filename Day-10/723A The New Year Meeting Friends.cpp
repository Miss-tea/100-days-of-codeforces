#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   
  int a , b , c;
  cin >> a>>b >> c;
  int s = a+b+c- max({a,b,c}) - min({a,b,c});
 
  cout << abs(s - a)+ abs(s - b) + abs(s - c);
 
 
 
 
}