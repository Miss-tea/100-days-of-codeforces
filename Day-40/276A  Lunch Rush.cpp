#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n , k ;
   cin >> n >> k ;
   int maxi = INT_MIN;
   for(int i = 0; i < n ; i++)
   {
    int f , t;
    cin >> f >> t;
    if(t>k)
    {
        if(f-(t-k) >maxi) maxi = f-(t-k);

    }
    else {
        if(maxi <f) maxi = f;
    }
    

   }
   cout << maxi ;

}
