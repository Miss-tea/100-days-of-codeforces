#include <bits/stdc++.h>
using namespace std;


int main() {
   int t ;
   cin >>t;
   while(t--)
   {
      
        int n ;
        cin >> n ;
        int v[n]={0};
        for(int i = 0 ; i< n ; i++)
        {
           int a ;
           cin >> a;
           v[i] = a; 
        } 
        if(v[0] == 1) cout << "YES" <<endl;
        else cout << "NO" << endl;
        
      


   }
}


