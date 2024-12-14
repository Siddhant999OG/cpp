// TOPOLOGICAL SORT USING DFS

// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<stack>

// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<int>> adjList;

//     void addEdge(int u, int v, bool decision){
//         adjList[u].push_back(v);
//         if(decision == 0){
//             adjList[v].push_back(u);
//         }
//     }

//     void print(){
//         for(auto nodes : adjList){
//             cout<<nodes.first<<"->";
//             for(auto neighbour : nodes.second){
//                 cout<<neighbour<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     void dfs(int src, unordered_map<int, bool> &visited, stack<int> &ans){
//         visited[src] = true;

//         for(auto neighbour : adjList[src]){
//             if(!visited[neighbour]){
//                 dfs(neighbour, visited, ans);
//             }
//         }
//         ans.push(src);
//     }
// };

// int main(){
//     Graph g;
//     g.addEdge(0,1,1);
//     g.addEdge(1,2,1);
//     g.addEdge(2,3,1);
//     g.addEdge(3,4,1);

//     g.addEdge(3,5,1);
//     g.addEdge(4,6,1);
//     g.addEdge(5,6,1);
//     g.addEdge(6,7,1);

//     unordered_map<int, bool> visited;
//     stack<int> ans;
//     for(int i=0; i<=2; i++){
//         if(!visited[i]){
//             g.dfs(i, visited, ans);
//         }
//     }

//     while(!ans.empty()){
//         cout<<ans.top();
//         ans.pop();
//     }
// }





// TOPOLOGICAL SORT USING BFS (kAHN'S ALGO)

#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>

using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool decision){
        adjList[u].push_back(v);
        if(decision == 0){
            adjList[v].push_back(u);
        }
    }

    void print(){
        for(auto nodes : adjList){
            cout<<nodes.first<<"->";
            for(auto neighbour : nodes.second){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int n, vector<int> &ans){
        queue<int> q;
        unordered_map<int, int> indegree;

        // calculate indegree
        for(auto node : adjList){
            int src = node.first;
            for(auto neighbour : node.second){
                indegree[neighbour]++;
            }
        }

        // jiski indegree 0 h store krlo
        for(int i=0; i<n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        // bfs logic

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            ans.push_back(frontNode);
            for(auto neighbour : adjList[frontNode]){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
    }
};

int main(){
    Graph g;
    int n=8;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);

    g.addEdge(3,5,1);
    g.addEdge(4,6,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);

    vector<int> ans;

    g.bfs(n, ans);

    cout<<"Printing topological sort"<<endl;
    for(auto i : ans){
        cout<<i<<", ";
    }
    cout<<endl;
}