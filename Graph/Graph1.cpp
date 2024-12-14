// ADJANCENCY MATRIX

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int e;
//     cin>>e;

//     vector<vector<int>> adj(n, vector<int>(n,0));

//     for(int i=0; i<e; i++){
//         int u,v;
//         cin>>u>>v;

//         adj[u][v] = 1;
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




// ADJANCENCY LIST

// #include<iostream>
// #include<list>
// #include<unordered_map>
// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool direction){
//         adjList[u].push_back(v);

//         if(direction == 0){
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
// };

// int main(){
//     Graph g;
//     g.addEdge(0, 1, 0);
//     g.addEdge(1, 2, 0);
//     g.addEdge(0, 2, 0);
//     g.print();
// }



// with weights

// #include<iostream>
// #include<list>
// #include<unordered_map>
// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<pair<int, int>>> adjList;

//     void addEdge(int u, int v, int weight, bool direction){
//         adjList[u].push_back({v, weight});

//         if(direction == 0){
//             adjList[v].push_back({u, weight});
//         }
//     }

//     void print(){
//         for(auto node : adjList){
//             cout<<node.first<<"->";
//             for(auto neightbour : node.second){
//                 cout<<"("<<neightbour.first<<", "<<neightbour.second<<")";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     Graph g;
//     g.addEdge(0,1,3,1);
//     g.addEdge(1,2,5,1);
//     g.addEdge(0,3,8,1);
//     g.addEdge(3,1,6,1);

//     g.print();
// }



// BFS

// #include<iostream>
// #include<list>
// #include<unordered_map>
// #include<queue>
// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool direction){
//         adjList[u].push_back(v);
//         if(direction == 0){
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

//     void bfs(int src){
//         queue<int> q;
//         unordered_map<int, bool> visited;

//         q.push(src);
//         visited[src] = true;

//         while(!q.empty()){
//             int frontNode = q.front();
//             q.pop();
//             cout<<frontNode<<" ";

//             for(auto neighbour : adjList[frontNode]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                 }
//             }
//         }
//     }
// };

// int main(){
//     Graph g;
//     g.addEdge(0, 1, 0);
//     g.addEdge(1, 2, 0);
//     g.addEdge(1, 3, 0);
//     g.addEdge(3, 5, 0);
//     g.addEdge(3, 7, 0);
//     g.addEdge(7, 6, 0);
//     g.addEdge(7, 4, 0);

//     g.print();
//     g.bfs(0);
// }




// BFS WHEN DISCONNECTED GRAPH IS GIVEN

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
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
//             cout<<node.first<<"->";
//             for(auto neighbour : node.second){
//                 cout<<neighbour<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     void bfs(int src, unordered_map<int, bool> &visited){
//         queue<int> q;

//         q.push(src);
//         visited[src] = true;

//         while(!q.empty()){
//             int frontNode = q.front();
//             q.pop();
//             cout<<frontNode<<", ";

//             for(auto neighbour : adjList[frontNode]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                 }
//             }
//         }
//     }
// };

// int main(){
//     Graph g;

//     g.addEdge(0,1,0);
//     g.addEdge(1,2,0);
//     g.addEdge(1,3,0);
//     g.addEdge(3,5,0);
//     g.addEdge(3,7,0);
//     g.addEdge(7,6,0);
//     g.addEdge(7,4,0);

//     g.print();

//     unordered_map<int, bool> visited;
//     for(int i=0; i<=7; i++){
//         if(!visited[i]){
//             g.bfs(i, visited);
//             cout << endl;
//         }
//     }

//     return 0;
// }





// DFS

#include<iostream>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction){
        adjList[u].push_back(v);

        if(direction == 0){
            adjList[v].push_back(u);
        }
    }

    void print(){
        for(auto node : adjList){
            cout<<node.first<<"->";
            for(auto neighbour : node.second){
                cout<<neighbour<<", ";
            }
            cout<<endl;
        }
    }

    void dfs(int src, unordered_map<int, bool>& visited){

        cout<<src<<", ";
        visited[src] = true;

        for(auto neighbour : adjList[src]){
            if(!visited[neighbour]){
                dfs(neighbour, visited);
            }
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,5,0);
    g.addEdge(3,7,0);
    g.addEdge(7,6,0);
    g.addEdge(7,4,0);

    g.print();

    unordered_map<int, bool> visited;
    g.dfs(0, visited);
}