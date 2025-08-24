#include <bits/stdc++.h>
using namespace std;

 
int main() {
    int x1 ,x2,x3;
    cin>>x1>>x2>>x3;

    int first = abs(x2-x1) + abs(x3-x1);
    int sec = abs(x2-x1) + abs(x3-x2);
    int third = abs(x3-x1) + abs(x3-x2);
    int ans = min(first , sec);
    ans = min (ans , third);
    cout<<ans<<endl;
   
   return 0;
}