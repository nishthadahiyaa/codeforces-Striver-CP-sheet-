#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // If any element is nonzero → "HARD"
    for (int x : a) {
        if (x == 1) {
            cout << "HARD\n";
            return 0;
        }
    }

    cout << "EASY\n";
    return 0;
}
