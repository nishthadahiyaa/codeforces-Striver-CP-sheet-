#include <bits/stdc++.h>
using namespace std;


void solve() {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '5' && str[i] <= '9') {
            if (i == 0 && str[i] == '9') continue;  
            str[i] = '0' + '9' - str[i];            
        }
    }
    
    cout << str << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    
    solve();   
    
}