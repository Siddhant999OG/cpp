// STRONGLY CONNECTED COMPONENT

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
// #include<climits>
// #include<stack>
// using namespace std;

// class Graph {
// public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool decision) {
//         adjList[u].push_back(v);
//         if (decision == 0) {
//             adjList[v].push_back(u);
//         }
//     }

//     void print() {
//         for (auto node : adjList) {
//             cout << node.first << "->";
//             for (auto nbr : node.second) {
//                 cout << nbr << " ";
//             }
//             cout << endl;
//         }
//     }

//     void dfs(int src, stack<int>& st, unordered_map<int, bool>& visited) {
//         visited[src] = true;

//         for (auto nbr : adjList[src]) {
//             if (!visited[nbr]) {
//                 dfs(nbr, st, visited);
//             }
//         }
//         st.push(src);
//     }

//     void dfs2(int src, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& newAdj) {
//         visited[src] = true;
//         cout<<src<<", ";

//         for (auto nbr : newAdj[src]) {
//             if (!visited[nbr]) {
//                 dfs2(nbr, visited, newAdj);
//             }
//         }
//     }

//     int countScc(int n) {
//         stack<int> st;
//         unordered_map<int, bool> visited;

//         // Step 1: Perform DFS and push nodes onto stack
//         for (int i = 0; i < n; i++) {
//             if (!visited[i]) {
//                 dfs(i, st, visited);
//             }
//         }

//         // Step 2: Create transposed graph
//         unordered_map<int, list<int>> newAdj;
//         for (auto node : adjList) {
//             for (auto nbr : node.second) {
//                 newAdj[nbr].push_back(node.first);
//             }
//         }

//         // Step 3: Perform DFS on transposed graph in order of finishing times
//         visited.clear();
//         int count = 0;

//         while (!st.empty()) {
//             int fNode = st.top();
//             st.pop();
//             if (!visited[fNode]) {
//                 cout<<"Printing "<<count+1<<" th Scc: ";
//                 dfs2(fNode, visited, newAdj);
//                 cout<<endl;
//                 count++;
//             }
//         }

//         return count;
//     }
// };

// int main() {
//     Graph g;
//     g.addEdge(0, 1, 1);
//     g.addEdge(1, 2, 1);
//     g.addEdge(2, 3, 1);
//     g.addEdge(3, 0, 1);
//     g.addEdge(2, 4, 1);
//     g.addEdge(4, 5, 1);
//     g.addEdge(5, 6, 1);
//     g.addEdge(6, 4, 1);
//     g.addEdge(6, 7, 1);
    
//     int ans = g.countScc(8);
//     cout << ans << endl;
// }



// BRIDGE IN A GRAPH

#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<climits>
#include<stack>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool decision) {
        adjList[u].push_back(v);
        if (decision == 0) {
            adjList[v].push_back(u);
        }
    }

    void print() {
        for (auto node : adjList) {
            cout << node.first << "->";
            for (auto nbr : node.second) {
                cout << nbr << " ";
            }
            cout << endl;
        }
    }

    void findBridge(int src, int parent, int& timer, vector<int>& tin, vector<int> &low, unordered_map<int, bool> visited){
        visited[src] = true;
        tin[src] = timer;
        low[src] = timer;
        timer++;

        for(auto nbr : adjList[src]){
            if(nbr==parent){
                continue;
            }
            if(!visited[nbr]){
                findBridge(nbr, src, timer, tin, low, visited);

                low[src] = min(low[src], low[nbr]);

                if(low[nbr] > tin[src]){
                    cout<<nbr<<"--"<<src<<" is a bridge"<<endl;
                }
            }
            else{
                low[src] = min(low[src], low[nbr]);
            }
        }
    }
    
};

int main() {
    Graph g;
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 0, 1);
    g.addEdge(2, 4, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 4, 1);
    g.addEdge(6, 7, 1);

    int n=7;
    int timer = 0;
    vector<int> tin(n);
    vector<int> low(n);
    unordered_map<int, bool> visited;
    g.findBridge(0,-1,timer, tin, low,visited);
}