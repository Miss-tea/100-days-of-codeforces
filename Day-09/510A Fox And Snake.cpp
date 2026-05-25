#include <bits/stdc++.h>
using namespace std;


int main() {
   
  int n ,m;
  cin >> n>>m;
  int a  = 1;
  for(int i = 0 ; i<n ; i++ )
  {
    for(int j = 0 ; j<m ; j++)
    {
      if(i ==0 || i==n-1 || (i%2 == 0)) cout << '#';
      else if(  a %2 != 0)
      {
            if(j != m-1)
             cout <<'.';
            else cout << '#';
            a++;
      } 
       else if(  a %2 == 0)
      {
            if(j != 0)
             cout <<'.';
            else cout << '#';
            a++;
      } 
        
       
    }
    cout << endl;

  }


}