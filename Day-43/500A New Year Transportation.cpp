#include <bits/stdc++.h>
using namespace std;

int main()
{
int n , k;
cin >> n >> k;
vector<int> arr;
arr.push_back(1);
for(int i = 1 ; i < n ; i++){
       int a ;
       cin >> a;
       arr.push_back(a+i);

}
sort(arr.begin() , arr.begin());
int i = 0;
while(i <k){
      i =arr[i]; 
}
if(i == k) cout << "YES";

else cout << "NO";
}
