#include <bits/stdc++.h>
using namespace std;

 
int main() {
    
    
   int  n, k, l, c, d, p, nl, np;
   cin>>n;
   cin>>k;
   cin>>l;
   cin>>c;
   cin>>d;
   cin>>p;
   cin>>nl;
   cin>>np;

   int drink = (k*l)/nl;
   int salt = p/np;
   int mini = min (drink , (c*d));
   int mini2 = min (mini , salt);
   int ans = mini2/n;
   cout<<ans<<endl;



   


    return 0;
    



   

   
}