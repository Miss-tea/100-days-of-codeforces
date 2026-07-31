#include <iostream>
using namespace std;
 
int main() {
     int n ;
     cin >> n;
    while(n--)
    {
     string s;
     cin >> s;
  int cnt= 0;
  string str = "codeforces";
       for(int i = 0 ; i< 10 ; i++)
       {
          if(s[i] != str[i])cnt++;
       }
       cout << cnt <<endl;
    
}
 
   }