#include <bits/stdc++.h>
using namespace std;


int main() {
   int t ;
   cin >> t;
   while(t--){
   int n , k;
   cin >> n >> k;
   int vis[n] ={0};
   vector<int> dis(n+1);
   for(int i = 0 ; i< n ; i++)
   {
         int a ;
         cin>> a;
         vis[i] = a;
   }
   dis.push_back(vis[0]);
   for(int i = 1 ; i< n ; i++)
   {
        
         dis.push_back(vis[i]-vis[i-1]);
   }
    dis.push_back(2*abs(k-vis[n-1]));
    auto it = max_element(dis.begin() , dis.end());
    cout << *it<<endl;
}


}