#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class info{
    public:
    int data;
    int row;
    int col;

    info(int val, int r, int c){
        data = val;
        row = r;
        col = c;
    }
};

class compare{
    public:
    bool operator()(info* a, info* b){
        return a->data > b->data ;
    }
};

vector<int> mergeKsortedArray(int arr[][4], int k, int n){
    priority_queue<info*, vector<info*>, compare> minHeap;

    for(int i=0; i<k; i++){
        info* temp = new info(arr[i][0], i, 0);
        minHeap.push(temp);
    }

    vector<int> ans;
    while(!minHeap.empty()){
        info* temp = minHeap.top();
        int topElement = temp->data;
        int rowElement = temp->row;
        int colElement = temp->col;
        minHeap.pop();

        ans.push_back(topElement);

        if(colElement+1 < n){
            info* newInfo = new info(arr[rowElement][colElement+1], rowElement, colElement+1);
            minHeap.push(newInfo);
        }
    }
    return ans;
}

int main(){
    int arr[][4] = {{2,4,6,8}, {1,3,5,7}, {0,9,10,11}};
    int k = 3;
    int n = 4;

    vector<int> ans = mergeKsortedArray(arr, k ,n);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}