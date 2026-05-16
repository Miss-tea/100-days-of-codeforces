#include <bits/stdc++.h>
using namespace std;


int main() {
  string a ;
  cin >> a;
  int arr[26]={0};
  for(int i = 0 ; i < a.size() ; i++)
  {
      arr[a[i]-97] =1;
  }
  int c = 0;
  for(int i = 0 ; i < 26 ; i++)
  {
    if(arr[i] ==1) c++;
  }
  if(c %2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
 
}