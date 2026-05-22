#include <bits/stdc++.h>
using namespace std;


int main() {
   
int k ;
cin >> k ;
int l , m , n , d;
cin>> l ;
cin>> m;
cin >> n;
cin >> d;

int vis[d+1]={0};
for(int i = 1 ; i*k<=d ; i++)
{
     vis[i*k] =1;
}
for(int i = 1 ; i*l<=d ; i++)
{
     vis[i*l] =1;
}
for(int i = 1 ; i*m<=d ; i++)
{
     vis[i*m] =1;
}
for(int i = 1 ; i*n<=d ; i++)
{
     vis[i*n] =1;
}

int c = 0;
for(int i = 1 ; i<=d ; i++)
{

     if(vis[i]) c++;

}

cout << c;
}