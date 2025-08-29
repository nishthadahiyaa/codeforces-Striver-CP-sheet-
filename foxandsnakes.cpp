#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool tog = true;

    for (int i = 0; i < n; i++) {
        vector<char> temp(m, '.');

        if (i % 2 == 0) {             
            temp.assign(m, '#');
        } else {
            if (tog) {                 
                if (m > 0) temp[m-1] = '#';
            } else {                   
                if (m > 0) temp[0] = '#';
            }
            tog = !tog;
        }

        for (char c : temp) cout << c;
        cout << endl;
    }
}
