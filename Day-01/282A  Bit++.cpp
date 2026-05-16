#include <bits/stdc++.h>
using namespace std;


int main() {
  int t ;
  cin >> t;
int num = 0;
  while(t--)
  {
     string  s;
     cin>>s;
     
     if(s[0] == '+' || s[s.length()-1] =='+')
     {
         num++;
     }
     else if(s[0] == '-' || s[s.length()-1] =='-')
     {
         num--;
     }
   
 }
 cout << num;
 
}