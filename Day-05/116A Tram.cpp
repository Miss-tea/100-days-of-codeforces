#include <bits/stdc++.h>
using namespace std;


int main() {
 int nm ;
 cin >> nm ;
 int arr[nm][2];
 int maxi = 0;
 int tr = 0;
 for(int i = 0 ; i< nm ; i++ )
 {
     int a, b ;
     cin >>a >> b;
     arr[i][0] = a;
     arr[i][1] =b;
     tr = tr-a+b;
     if((tr) >maxi)
     {

      maxi = tr;
     }

 }
 cout << maxi;
}