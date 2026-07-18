#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    int a = 0;
    for(int i = 2 ; i <= n+1 ; i++)
    {

          arr.push_back(arr[i-1]+arr[i-2]);
          if(arr[i] == n )
            {a = i ;break;}
    }
    if(n>2)
        cout << arr[a-1] << " "<<arr[a-3]<<" "<<arr[a-4];
    else if(n == 2) cout << 1 <<" "<<1 <<" "<<0;
    else if(n == 1) cout << 0 << " "<<0 <<" "<<1;
    else if(n == 0) cout << 0<<" "<<0<<" "<<0;

}
