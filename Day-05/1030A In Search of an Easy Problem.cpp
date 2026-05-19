#include <bits/stdc++.h>
using namespace std;


int main() {
 int a ;
 cin >> a;
 int flg = 0;
 for(int i = 0 ; i< a ;i++)
 {
  int x ;
  cin >> x;
  if(x){flg = 1;}

 }
 if(flg) cout << "HARD";
 else cout << "EASY";
}