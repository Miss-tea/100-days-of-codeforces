#include <bits/stdc++.h>
using namespace std;


int main() {
   
int n ;
cin >> n ;
int vis[n+1] ={0};
int a ;
cin >>a;
for(int i = 0 ; i< a ; i++)
{
    int x ;
    cin >> x;
    vis[x]= 1;
}
int b ;cin >>b;
for(int i = 0 ; i< b ; i++)
{
    int x ;
    cin >> x;
    vis[x]= 1;
}
for(int i = 1 ; i<= n ; i++)
{
   if(vis[i] == 0)
   {
    cout <<"Oh, my keyboard!";
    return 0;

   }
}
cout << "I become the guy.";
}