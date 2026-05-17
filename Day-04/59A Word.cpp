#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin >>s;
  int sl= 0 , cl=0;

  for(int i = 0 ; i<s.size() ; i++)
  {
    if(s[i]<97 ) cl++;
    else sl++;
  }
  if(sl>=cl){
      for(int i = 0 ; i< s.size() ;i++)
      {
        if(s[i]<97)
        {
          s[i] = s[i]+32;
        }
      }

  }
  else{
    for(int i = 0 ; i< s.size() ;i++)
      {
        if(s[i]>=97)
        {
          s[i] = s[i]-32;
        }
      }


  }
  cout << s;
 
}