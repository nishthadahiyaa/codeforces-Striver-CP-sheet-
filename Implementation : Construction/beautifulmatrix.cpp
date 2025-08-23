#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")

#define vi vector<int>
#define vvi vector<vi>

#define ii pair<int,int>
#define vii vector<ii>
#define vs vector<string>
#define vvs vector<vs>
#define li pair<long long, int>
#define vvii vector<vector<ii>>

// Priority queues
#define pqi priority_queue<int, vi, greater<int>>
#define pqii priority_queue<ii, vector<ii>, greater<ii>>
#define pqli priority_queue<li, vector<li>, greater<li>>
#define pqt priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>>

// Short utilities
#define pb push_back
#define p push
#define po pop
#define all(x) (x).begin(), (x).end()
#define f first
#define s second

// Directions
#define dx {-1, 0, 1, 0}
#define dy {0, 1, 0, -1}
#define dx8 {-1,-1,-1,0,0,1,1,1}
#define dy8 {-1,0,1,-1,1,-1,0,1}
#define ll long long
ll MOD = 1e9 + 7;

// IO & loop
#define wt int t; cin >> t; while(t--)    // test cases loop
#define pr(x) cout << x << "\n"           // print with newline
#define rt return                        // shorthand for return
#define nemp(x) (!(x).empty())            // not empty

// Graph adjacency macros
#define dirw(adj, edges) for (auto &e : edges) adj[e[0]].pb({e[1], e[2]})  // directed weighted
#define diru(adj, edges) for (auto &e : edges) adj[e[0]].pb(e[1])          // directed unweighted
#define unw(adj, edges) for (auto &e : edges) { adj[e[0]].pb({e[1], e[2]}); adj[e[1]].pb({e[0], e[2]}); } // undirected weighted
#define unu(adj, edges) for (auto &e : edges) { adj[e[0]].pb(e[1]); adj[e[1]].pb(e[0]); }                 // undirected unweighted


 
int main() {
    
    
    vvi grid(5 , vi(5));
    int row ; 
    int col ; 
    

    for (int i =0 ; i< 5 ; i++){
        for (int j=0 ; j <5 ; j++){
            int x ;
            cin>>x ;
            if (x ==1 ){
                row = i ; 
                col = j ; 
                


            }
            grid[i][j] = x ; 
        }

    }
    int ans = abs(row -2 ) + abs(col-2);
    cout<<ans <<endl;


    return 0;
    



   

   
}