///////////////
// INSERTION //
///////////////
// #include<iostream>
// using namespace std;

// class heap{
//     public:
//     int arr[101];
//     int size;

//     heap(){
//         size = 0;
//     }

//     void insert(int value){
//         size = size+1;
//         int index = size;
//         arr[index] = value;

//         while(index>1){
//             int parentIndex = index/2;
//             if(arr[index]> arr[parentIndex]){
//                 swap(arr[index], arr[parentIndex]);
//                 int index = parentIndex;
//             }
//             else{
//                 return;
//             }
//         }
//     }
// };

// int main(){
//     heap h;
//     h.arr[0] = -1;
//     h.arr[1] = 100;
//     h.arr[2] = 50;
//     h.arr[3] = 60;
//     h.arr[4] = 40;
//     h.arr[5] = 45;
//     h.size = 5;

//     cout<<"Printing"<<endl;
//     for(int i=0; i<h.size; i++){
//         cout<<h.arr[i]<<" ";
//     }
//     cout<<endl;

//     h.insert(110);
//     cout<<endl<<"Printing after inserting"<<endl;
//     for(int i=0; i<h.size; i++){
//         cout<<h.arr[i]<<" ";
//     }
//     cout<<endl;

// }

//////////////
// DELETION //
//////////////
// #include<iostream>
// using namespace std;

// class heap {
// public:
//     int arr[101];
//     int size;

//     heap() {
//         size = 0;
//     }

//     void insert(int value) {
//         size = size + 1;
//         int index = size;
//         arr[index] = value;

//         while (index > 1) {
//             int parentIndex = index / 2;
//             if (arr[index] > arr[parentIndex]) {
//                 swap(arr[index], arr[parentIndex]);
//                 index = parentIndex;  // Removed redeclaration
//             }
//             else {
//                 return;
//             }
//         }
//     }

//     int remove() {
//         if (size == 0) {
//             cout << "Heap is empty" << endl;
//             return -1; // Returning -1 to indicate an empty heap
//         }

//         int ans = arr[1];
//         arr[1] = arr[size];
//         size--;

//         int index = 1;
//         while (index < size) {
//             int left = 2 * index;
//             int right = 2 * index + 1;
//             int largest = index;
//             if (left <= size && arr[largest] < arr[left]) {
//                 largest = left;
//             }
//             if (right <= size && arr[largest] < arr[right]) {
//                 largest = right;  // Corrected the index for the right child
//             }
//             if (largest == index) {
//                 break;
//             }
//             else {
//                 swap(arr[index], arr[largest]);
//                 index = largest;
//             }
//         }
//         return ans;
//     }
// };

// int main() {
//     heap h;
//     h.insert(100);
//     h.insert(50);
//     h.insert(60);
//     h.insert(40);
//     h.insert(45);

//     cout << "Printing" << endl;
//     for (int i = 1; i <= h.size; i++) {  // Start the loop from index 1
//         cout << h.arr[i] << " ";
//     }
//     cout << endl;

//     h.remove();
//     cout << "Printing after removing" << endl;
//     for (int i = 1; i <= h.size; i++) {  // Start the loop from index 1
//         cout << h.arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




/////////////
// HEAPIFY //
/////////////

// #include<iostream>
// using namespace std;

// void heapify(int arr[], int n, int i){
//     int index = i;
//     int leftindex = 2*i;
//     int rightindex = 2*i+1;
//     int largest = index;

//     if(leftindex<=n && arr[largest] < arr[leftindex]){
//         largest = leftindex;
//     }
//     if(rightindex<=n && arr[largest] < arr[rightindex]){
//         largest = rightindex;
//     }
//     if(index!=largest){
//         swap(arr[index], arr[largest]);
//         index = largest;
//         heapify(arr,n,index);
//     }
// }

// void buildheapify(int arr[], int n){
//     for(int i = n/2; i>0; i--){
//         heapify(arr,n,i);
//     }
// }

// int main(){
//     int arr[] = {-1,12,15,13,11,14};
//     int n = 5;
//     buildheapify(arr,n);

//     cout<<"printing heap"<<endl;
//     for(int i=0; i<=n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }




///////////////
// HEAP SORT //
///////////////

#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int index = i;
    int leftindex = 2*i;
    int rightindex = 2*i+1;
    int largest = index;

    if(leftindex<=n && arr[largest] < arr[leftindex]){
        largest = leftindex;
    }
    if(rightindex<=n && arr[largest] < arr[rightindex]){
        largest = rightindex;
    }
    if(index!=largest){
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr,n,index);
    }
}

void buildheapify(int arr[], int n){
    for(int i = n/2; i>0; i--){
        heapify(arr,n,i);
    }
}

void heapsort(int arr[], int n){
    int index = n;

    while(n != 1){
        swap(arr[1], arr[index]);
        index--;
        n--;

        heapify(arr, n, 1);
    }
}

int main(){
    int arr[] = {-1,12,15,13,11,14};
    int n = 5;
    buildheapify(arr,n);

    cout<<"printing heap"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapsort(arr,n);
    cout<<"printing heapsort"<<endl;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}