#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s ;
  cin >> s ;
  for(int i = 0 ; i < s.size() ; i++)
  {
    if(s[i] <= 'Z' ) s[i] = s[i] -'A'+'a';
  }
  vector<char>str;
   for(int i = 0 ; i < s.size() ;i++ )
  {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
    {
     continue;
    }
    else{str.push_back('.');
    str.push_back(s[i]);
}
  }
  for(int i = 0; i < str.size() ; i++) cout << str[i];
}
