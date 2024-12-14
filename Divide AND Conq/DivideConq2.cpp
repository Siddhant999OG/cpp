////////////////
// QUICK SORT //
////////////////

// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e) {
//     int pivot = arr[s];
//     int count = 0;

//     for (int i = s + 1; i <= e; i++) {
//         if (arr[i] <= pivot) {
//             count++;
//         }
//     }

//     int pivotIndex = s + count;
//     swap(arr[pivotIndex], arr[s]);

//     int i = s;
//     int j = e;

//     while (i < pivotIndex && j > pivotIndex) {
//         while (arr[i] <= pivot) {
//             i++;
//         }

//         while (arr[j] > pivot) {
//             j--;
//         }

//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i], arr[j]);
//         }
//     }
//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e) {
//     if (s >= e) {
//         return;
//     }

//     int p = partition(arr, s, e);

//     quickSort(arr, s, p - 1);

//     quickSort(arr, p + 1, e);
// }

// int main() {
//     int arr[] = {8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,2,2,2,50,30};
//     int n = 20;

//     int s = 0;
//     int e = n - 1;

//     quickSort(arr, s, e);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << "-";
//     }
//     return 0;
// }



//////////////////
// BACKTRACKING //
//////////////////



/////////////////////////////
// PERMUTATION OF A STRING //
/////////////////////////////

#include<iostream>
using namespace std;

void solve(string &str, int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j = i; j<str.length(); j++){
        swap(str[i], str[j]);

        solve(str, i+1);

        swap(str[i], str[j]);
    }
}

int main(){
    string str = "abc";
    int i=0;
    solve(str, i);
}