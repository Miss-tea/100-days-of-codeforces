#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
     int n ;
     cin >> n ;
    int y = n;
     long long sum= 0;
     long long x = n/10;

      if(n-10*x >=0){sum = sum +x;
      n= n-10*x +x;
       x= n/10;
     }

      if(n-10*x >=0){sum = sum +x;
      n= n-10*x +x;
       x= n/10;
     }
      if(n-10*x >=0){sum = sum +x;
      n= n-10*x +x;
     x= n/10;

     }
      if(n-10*x >=0){sum = sum +x;
      n= n-10*x +x;
       x= n/10;
     }
     while(n>0)
     {
      if(n-10 >=0) sum++;
      n = n-10+1;
    
     }

     cout <<y+sum<<endl;
    }
}
