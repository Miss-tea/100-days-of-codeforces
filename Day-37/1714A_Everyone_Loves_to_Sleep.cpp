#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
     int n , a , b;
     cin >> n >> a >> b;
    vector<pair<int,int>>v(n);
    int flg = 1;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> v[i].first>>v[i].second;
        if(v[i].first == a && v[i].second==b) flg = 0;
    }
    if(flg ==0){
      cout << 0<<" "<<0 <<endl;
    continue;
    }
    int mini = INT_MAX;int z =INT_MAX;
    for(int i = 0 ; i< n ; i++)
    {

        int x=0,y = 0;
        if(v[i].second>=b){
           y = v[i].second - b;
        }
       else {y = v[i].second +60-b; x--;}

        if(v[i].first+x>=a){
           x += v[i].first- a;
        }
        else{
          x += v[i].first + 24-a;
        }
       if(mini > x) {mini=x; z = y;}
       else if(mini ==x && z >y) {z = y;
     } 
  
    }
    cout<< mini << " "<< z <<endl;

    
     
    }
}
