// BELLMAN FORD

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

    void bellmanFord(int n, int src){
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        for(int i=0; i<n-1; i++){
            for(auto t : adjList){
                for(auto nbr : t.second){
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+ wt < dist[v]){
                        dist[v] = dist[u]+ wt;
                    }
                }
            }
        }

        // check for -ve cycle
        bool negativeCycle = false;
        for(int i=0; i<n-1; i++){
            for(auto t : adjList){
                for(auto nbr : t.second){
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+ wt < dist[v]){
                        negativeCycle = true;
                    }
                }
            }
        }

        if(negativeCycle == true){
                cout<<"_ve cycle detected"<<endl;
            }
        else{
            cout<<"No -ve cycle found"<<endl;
        }

        for(auto i : dist){
            cout<<i<<" ";
        }
    }
};

int main() {
    Graph g;

    g.addEdge(0,1,-1,1);
    g.addEdge(0,2,4,1);
    g.addEdge(1,2,3,1);
    g.addEdge(1,3,2,1);
    g.addEdge(1,4,2,1);
    g.addEdge(3,1,1,1);
    g.addEdge(3,2,5,1);
    g.addEdge(4,3,-3,1);


    g.print();

    g.bellmanFord(5, 0);

    return 0;
}





// FLOYAD WARSHAL

// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <queue>
// #include <stack>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <set>

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

//     void floyadwarshal(int n){
//         vector<vector<int>> dist(n, vector<int>(n, 10000));
//         for(int i=0; i<n; i++){
//             dist[i][i] = 0;
//         }

//         for(auto t : adjList){
//             for(auto nbr : t.second){
//                 int u = t.first;
//                 int v = nbr.first;
//                 int wt = nbr.second;
//                 dist[u][v] = wt;
//             }
//         }
//         for(int helper=0; helper<n; helper++){
//             for(int src=0; src<n; src++){
//                 for(int dest=0; dest<n; dest++){
//                     dist[src][dest] = min(dist[src][dest] , dist[src][helper]+dist[helper][dest] );
//                 }
//             }
//         }

//         cout<<"Printing"<<endl;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 cout<<dist[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main() {
//     Graph g;

//     g.addEdge(0,1,3,1);
//     g.addEdge(0,3,5,1);
//     g.addEdge(1,0,2,1);
//     g.addEdge(1,3,4,1);
//     g.addEdge(2,1,1,1);
//     g.addEdge(3,2,2,1);

//     g.print();

//     g.floyadwarshal(4);

//     return 0;
// }