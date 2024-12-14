// SHORTEST PATH WITH WEIGHT 1 OF ALL USING BFS

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>
// #include<vector>
// #include<algorithm>

// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<pair<int,int>>> adjList;

//     void addEdge(int u, int v, int wt, bool decision){
//         adjList[u].push_back({v,wt});
//         if(decision == 0){
//             adjList[v].push_back({u,wt});
//         }
//     }

//     void print(){
//         for(auto nodes : adjList){
//             cout << nodes.first << "->";
//             for(auto neighbour : nodes.second){
//                 cout << "{" << neighbour.first << "," << neighbour.second << "} ";
//             }
//             cout << endl;
//         }
//     }

//     void shortPath(int src, int dest){
//         queue<int> q;

//         unordered_map<int, bool> visited;
//         unordered_map<int, int> parent;

//         q.push(src);
//         visited[src] = true;
//         parent[src] = -1;

//         while(!q.empty()){
//             int frontNode = q.front();
//             q.pop();

//             for(auto neighbour : adjList[frontNode]){
//                 if(!visited[neighbour.first]){
//                     q.push(neighbour.first);
//                     visited[neighbour.first] = true;
//                     parent[neighbour.first] = frontNode;
//                 }
//             }
//         }

//         // Generate the path from dest to src
//         vector<int> ans;
//         int node = dest;
//         while(node != -1){
//             ans.push_back(node);
//             node = parent[node];
//         }

//         // Reverse the path to get src to dest
//         reverse(ans.begin(), ans.end());

//         cout << "Shortest path from " << src << " to " << dest << " is: ";
//         for(auto i : ans){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){
//     Graph g;

//     g.addEdge(0, 1, 1, 0);
//     g.addEdge(1, 2, 1, 0);
//     g.addEdge(2, 3, 1, 0);
//     g.addEdge(3, 4, 1, 0);
//     g.addEdge(0, 5, 1, 0);
//     g.addEdge(5, 4, 1, 0);
//     g.addEdge(0, 6, 1, 0);
//     g.addEdge(6, 7, 1, 0);
//     g.addEdge(7, 8, 1, 0);
//     g.addEdge(8, 4, 1, 0);

//     g.print();

//     int src = 0;
//     int dest = 4;

//     g.shortPath(src, dest);

//     return 0;
// }






// SHORTEST PATH WITH DIFFERENT WEIGHT OF ALL USING DFS


// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// #include <stack>
// #include <vector>
// #include <algorithm>
// #include <climits>

// using namespace std;

// class Graph {
// public:
//     unordered_map<int, list<pair<int, int>>> adjList;

//     void addEdge(int u, int v, int wt, bool decision) {
//         adjList[u].push_back({v, wt});
//         if (decision == 0) {
//             adjList[v].push_back({u, wt});
//         }
//     }

//     void print() {
//         for (auto nodes : adjList) {
//             cout << nodes.first << "->";
//             for (auto neighbour : nodes.second) {
//                 cout << "{" << neighbour.first << "," << neighbour.second << "} ";
//             }
//             cout << endl;
//         }
//     }

//     void topo(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
//         visited[src] = true;

//         for (auto neighbour : adjList[src]) {
//             if (!visited[neighbour.first]) {
//                 topo(neighbour.first, visited, ans);
//             }
//         }
//         ans.push(src);
//     }

//     void shorted(int src, int destination, int n) {
//         stack<int> ans;
//         unordered_map<int, bool> visited;

//         // Perform topological sort
//         for (int i = 0; i < n; ++i) {
//             if (!visited[i]) {
//                 topo(i, visited, ans);
//             }
//         }

//         vector<int> dist(n, INT_MAX);
//         dist[src] = 0;

//         while (!ans.empty()) {
//             int top = ans.top();
//             ans.pop();

//             if (dist[top] != INT_MAX) {
//                 for (auto neighbour : adjList[top]) {
//                     if (dist[top] + neighbour.second < dist[neighbour.first]) {
//                         dist[neighbour.first] = dist[top] + neighbour.second;
//                     }
//                 }
//             }
//         }

//         // Print shortest distances
//         cout << "Shortest distances from node " << src << " to all other nodes:" << endl;
//         for (int i = 0; i < n; ++i) {
//             if (dist[i] == INT_MAX) {
//                 cout << i << ": INF" << endl;
//             } else {
//                 cout << i << ": " << dist[i] << endl;
//             }
//         }
//     }
// };

// int main() {
//     Graph g;

//     g.addEdge(0, 1, 5, 1);
//     g.addEdge(1, 2, 3, 1);
//     g.addEdge(1, 3, 6, 1);
//     g.addEdge(2, 3, 1, 1);
//     g.addEdge(2, 4, 6, 1);
//     g.addEdge(4, 3, 1, 1);

//     g.print();

//     int src = 0;
//     int dest = 3;
//     int n = 5;  // Number of nodes in the graph

//     g.shorted(src, dest, n);

//     return 0;
// }






// DJIKSTRA ALGORITHM

#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int wt, bool decision) {
        adjList[u].push_back({v, wt});
        if (decision == 0) {
            adjList[v].push_back({u, wt});
        }
    }

    void print() {
        for (auto nodes : adjList) {
            cout << nodes.first << "->";
            for (auto neighbour : nodes.second) {
                cout << "{" << neighbour.first << "," << neighbour.second << "} ";
            }
            cout << endl;
        }
    }

    void topo(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
        visited[src] = true;

        for (auto neighbour : adjList[src]) {
            if (!visited[neighbour.first]) {
                topo(neighbour.first, visited, ans);
            }
        }
        ans.push(src);
    }

    void dijkstra(int src, int n){
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;

        dist[src] = 0;
        st.insert({0,src});

        while(!st.empty()){
            // fetch the smallest or first element from set
            auto top = *(st.begin());
            int nodeDistance = top.first;
            int node = top.second;

            // pop from set
            st.erase(st.begin());

            for(auto neighbour : adjList[node]){
                if(nodeDistance + neighbour.second < dist[neighbour.first]){
                    // dist update krdo
                    auto result = st.find({dist[neighbour.first], neighbour.first});

                    // if found
                    if(result != st.end()){
                        st.erase(result);
                    }
                    dist[neighbour.first] = nodeDistance + neighbour.second;
                    st.insert({dist[neighbour.first], neighbour.first});
                }
            }
        }
        cout<<"Printing"<<endl;
        for(int i=0; i<n; i++){
            cout<<dist[i]<<", ";
        }
        cout<<endl;
    }
};

int main() {
    Graph g;

    g.addEdge(6, 1, 14, 0);
    g.addEdge(6, 3, 2, 0);
    g.addEdge(3, 1, 9, 0);
    g.addEdge(3, 2, 10, 0);
    g.addEdge(1, 2, 7, 0);
    g.addEdge(2, 4, 15, 0);
    g.addEdge(4, 3, 11, 0);
    g.addEdge(6, 5, 9, 0);
    g.addEdge(4, 5, 6, 0);

    g.print();

    g.dijkstra(6, 7);

    return 0;
}
  