//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int> vis(V, 0);
        queue<int> q;
        vector<int> ans;
        
        q.push(0); //graph starting from 0, so push 0 onto the queue
        vis[0]= 1; //mark 0 as visited
        
        while(!q.empty()){
            int node= q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto neighbour:adj[node]){
                if(vis[neighbour]==0){ //if the neighbour is not visited
                    vis[neighbour]=1; //mark the neighbour as visited
                    q.push(neighbour); //push the neighbour to the queue
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends