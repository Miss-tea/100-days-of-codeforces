#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n , k;
   cin >> n >> k;
   vector<int>arr(k);
   for(int i = 0 ; i < k ; i++) cin >> arr[i];
    sort(arr.begin() , arr.end(),greater<>());
  int mini = INT_MAX;
  for(int i = 0 ; i <= k-n ; i++)
  {
    int cnt = 0;
    for(int j = i; j <i+n ; j++)
    {
           if((arr[i] - arr[j]) >cnt) cnt = arr[i]-arr[j];
           
    }
    mini = min(cnt , mini);
  }
  cout << mini;

  
}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}