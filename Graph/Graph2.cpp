// CHECK IF GRAPH IS CYCLIC OR NOT USING BFS

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool descision){
//         adjList[u].push_back(v);

//         if(descision == 0){
//             adjList[v].push_back(u);
//         }
//     }

//     void print(){
//         for(auto node : adjList){
//             cout<<node.first<<"->";
//             for(auto neighbour : node.second){
//                 cout<<neighbour<<", ";
//             }
//             cout<<endl;
//         }
//     }

//     bool cyclecheckBFS(int src, unordered_map<int, bool> &visited){
//         queue<int> q;
//         unordered_map<int, int> parent;

//         q.push(src);
//         visited[src] = true;
//         parent[src] = -1;

//         while(!q.empty()){
//             int frontNode = q.front();
//             q.pop();

//             for(auto neighbour : adjList[frontNode]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                     parent[neighbour] = frontNode;
//                 }
//                 if(visited[neighbour] && neighbour != parent[frontNode]){ 
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// int main(){
//     Graph g;

//     int n = 3;
//     g.addEdge(0,1,0);
//     g.addEdge(1,2,0);
//     g.addEdge(0,2,0);

//     g.print();
//     cout<<endl;

//     bool ans = false;
//     unordered_map<int, bool> visited;
//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             ans = g.cyclecheckBFS(i, visited);
//             if(ans == true){
//                 break;
//             }
//         }
//     }

//     if(ans == true){
//         cout<<"Cycle is present"<<endl;
//     }
//     else{
//         cout<<"Cycle is not present"<<endl;
//     }
// }






// CHECK IF GRAPH IS CYCLIC USING DFS

// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class Graph{
// public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool decision){
//         adjList[u].push_back(v);
//         if(decision == 0){
//             adjList[v].push_back(u);
//         }
//     }

//     void print(){
//         for(auto node : adjList){
//             cout << node.first << "->";
//             for(auto neighbour : node.second){
//                 cout << neighbour << ", ";
//             }
//             cout << endl;
//         }
//     }

//     bool checkCyclicUsingDFS(int src, unordered_map<int, bool> &visited, int parent){
//         visited[src] = true;

//         for(auto neighbour : adjList[src]){
//             if(!visited[neighbour]){
//                 if(checkCyclicUsingDFS(neighbour, visited, src))
//                     return true;
//             } 
//             if(visited[neighbour] && neighbour != parent) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// int main(){
//     Graph g;

//     int n = 3;
//     g.addEdge(0, 1, 0);
//     g.addEdge(1, 2, 0);
//     g.addEdge(0, 2, 0);

//     g.print();
//     cout << endl;

//     bool ans = false;
//     unordered_map<int, bool> visited;
//     for(int i = 0; i < n; i++){
//         if(!visited[i]){
//             ans = g.checkCyclicUsingDFS(i, visited, -1);
//             if(ans){
//                 break;
//             }
//         }
//     }

//     if(ans){
//         cout << "Cycle is present" << endl;
//     } else {
//         cout << "Cycle is not present" << endl;
//     }

//     return 0;
// }






// CHECK IF GRAPH IS CYCLIC USING DFS IN DIRECTED GRAPH


#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

class Graph{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool decision){
        adjList[u].push_back(v);
        if(decision == 0){ // Use !decision to check if decision is false (0)
            adjList[v].push_back(u);
        }
    }

    void print(){
        for(auto node : adjList){
            cout << node.first << "->";
            for(auto neighbour : node.second){
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }

    bool checkCyclicUsingDFS(int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &visitedDFS, int parent){
        visited[src] = true;
        visitedDFS[src] = true;
        
        for(auto neighbour : adjList[src]){
            if(neighbour == parent){
                continue; // Skip the edge back to the parent in undirected graph
            }
            if(!visited[neighbour]){
                bool cycleFound = checkCyclicUsingDFS(neighbour, visited, visitedDFS, src);
                if(cycleFound){
                    return true;
                }
            } 
            else if(visitedDFS[neighbour]) {
                return true;
            }
        }
        visitedDFS[src] = false; // Reset visited status for backtracking
        return false;
    }

    bool isCyclic(int n) {
        unordered_map<int, bool> visited;
        unordered_map<int, bool> visitedDFS;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(checkCyclicUsingDFS(i, visited, visitedDFS, -1)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g;

    int n = 3;
    g.addEdge(0, 1, false); // Use false for undirected edge
    g.addEdge(1, 2, false);
    g.addEdge(0, 2, false);

    g.print();
    cout << endl;

    if(g.isCyclic(n)){
        cout << "Cycle is present" << endl;
    } else {
        cout << "Cycle is not present" << endl;
    }

    return 0;
}
