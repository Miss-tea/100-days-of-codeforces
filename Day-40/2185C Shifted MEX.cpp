#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin() , arr.end()), arr.end());
    int cnt =0;
    int maxi = 0;
    for(int i = 0 ; i< n-1 ; i++)
    {
       if(arr[i] +1 == arr[i+1]) 
        {
            cnt++;
            if(cnt > maxi) maxi = cnt ;
        }
       else cnt = 0;
    
    }
    cout << maxi+1<<endl;    
   }

}
