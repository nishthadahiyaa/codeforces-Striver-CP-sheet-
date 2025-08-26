#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ; 
    cin>>n; 

    // traversing from back 
    int place =1 ; 
    vector<int> ans ; 

    while (n >0 ){
        int digit = n%10;
        if(digit != 0 ){
            // form new no 
            ans.push_back(digit*place);
            
        }
        n=n/10;
        place= place*10;
    }
    cout<<ans.size()<<endl;
    for (int x : ans) cout << x << " ";

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout<<endl;
    }
}