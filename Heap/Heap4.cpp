#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int callmedian(int &median, priority_queue<int> &minHeap, priority_queue<int, vector<int>, greater<int>> &maxHeap, int element) {
    if (minHeap.empty() || element > median) {
        minHeap.push(element);
    }
    else {
        maxHeap.push(element);
    }

    // Balance the heaps
    if (minHeap.size() > maxHeap.size() + 1) {
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
    else if (maxHeap.size() > minHeap.size()) {
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }

    // Update median
    if (minHeap.size() == maxHeap.size()) {
        median = (minHeap.top() + maxHeap.top()) / 2;
    }
    else {
        median = minHeap.top();
    }

    return median;
}

int main() {
    int arr[6] = {5, 7, 2, 9, 3, 8};
    int n = 6;

    int median = 0;
    priority_queue<int> minHeap;
    priority_queue<int, vector<int>, greater<int>> maxHeap;

    for (int i = 0; i < n; i++) {
        int element = arr[i];
        median = callmedian(median, minHeap, maxHeap, element);
        cout << "->" << median << " ";
    }
    cout << endl;

    return 0;
}
