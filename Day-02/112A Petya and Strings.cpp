#include <bits/stdc++.h>
using namespace std;


int main() {
  string a , b;
  cin >> a ;
  cin>>b;
   for(int i = 0 ; i< a.size() ; i++)
   {
    if(a[i]<97) a[i] = a[i] +32;
     if(b[i]<97) b[i] = b[i] +32;

   }
   int iseq = 0;
   
   for(int i = 0 ; i< a.size() ; i++)
   {
    if(a[i] > b[i]){ iseq = 1; break;}
    else if(a[i]<b[i]) {iseq = -1 ; break;}
    }
    cout << iseq;

 
}