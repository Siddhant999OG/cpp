#include <iostream>
using namespace std;

void merge(int* arr, int s, int e) {
    int mid = (s + e) / 2;

    // size of array
    int left = mid - s + 1;
    int right = e - mid;

    // new array
    int* left1 = new int[left];
    int* right1 = new int[right];

    //copy the array
    int k = s;
    for (int i = 0; i < left; i++) {
        left1[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < right; i++) {
        right1[i] = arr[k];
        k++;
    }

    //merge function
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArray = s;

    while (leftIndex < left && rightIndex < right) {
        if (left1[leftIndex] < right1[rightIndex]) {
            arr[mainArray++] = left1[leftIndex++];
        } else {
            arr[mainArray++] = right1[rightIndex++];
        }
    }

    while (leftIndex < left) {
        arr[mainArray++] = left1[leftIndex++];
    }

    while (rightIndex < right) {
        arr[mainArray++] = right1[rightIndex++];
    }

}

void mergesort(int* arr, int s, int e) {
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    merge(arr, s, e);
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
}

int main() {
    int arr[] = {2, 1, 3, 4, 6, 5};
    int n = 6;

    int s = 0;
    int e = n - 1;
    mergesort(arr, s, e);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "-";
    }
    cout << endl;
}