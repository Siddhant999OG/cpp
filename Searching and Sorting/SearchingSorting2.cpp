//PIVOT ELEMENT//
//               ---> 9 10 2 4 6 8  10 ke baad 2 aa rha h jo ascending nhii h to 10 pivot h

#include<iostream>
#include<vector>
using namespace std;


int pivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid<=e && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1>=s && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int ans = pivot(arr);
    cout<<arr[ans];
}





/////////////////////////////////////
//FIND A NUMBER USING PIVOT ELEMENT// OR SEARCH IN ROTATED SORTED ARRAY
/////////////////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// int pivot(vector<int> arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid = (s+e)/2;

//     while(s<=e){
//         if(s==e){
//             return s;
//         }
//         if(mid<=e && arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         if(mid-1>=s && arr[mid-1]>arr[mid]){
//             return mid-1;
//         }
//         if(arr[s]>arr[mid]){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = (s+e)/2;
//     }
//     return -1;
// }

// int binarySearch(vector<int> arr, int s, int e, int target){
//     int mid = (s+e)/2;
//     while(s<=e){
//         if(arr[mid]== target){
//             return mid;
//         }
//         else if(arr[mid] > target){
//             e = mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//         mid = (s+e)/2;
//     }
//     return -1;
// }
// int search(vector<int>& arr, int target) {
//     int pivotIndex = pivot(arr);
//     int ans =0;
//     if(target>=arr[0] && target <=arr[pivotIndex]){
//         ans = binarySearch(arr,0,pivotIndex, target);
//     }
//     else{
//         ans = binarySearch(arr, pivotIndex+1, arr.size()-1, target);
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     int ans = pivot(arr);
//     cout<<"The index is "<<ans<<endl;
//     cout<<"The number is "<<arr[ans]<<endl;
//     int ans2 = search(arr,target);
//     cout<<ans2;
// }





//UNDER ROOT OF A NUMBER//

// #include<iostream>
// using namespace std;

// int findSqrt(int n){
//     int target = n;
//     int s = 0;
//     int e = n;
//     int mid = (s+e)/2;
//     int ans = -1;

//     while(s<=e){
//         if(mid*mid == target){
//             return mid;
//         }
//         else if(mid*mid > target){
//             e = mid-1;
//         }
//         else{
//             ans = mid;
//             s = mid+1;
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
    
//     int ans = findSqrt(n);

//     int kitnedecimal;
//     cin>>kitnedecimal;

//     double step = 0.1;
//     double finalAns = ans;

//     for(int i=0; i<kitnedecimal; i++){
//         for(double j=finalAns; j*j<=n; j = j+step){
//             finalAns = j;
//         }
//         step = step/10;
//     }

//     cout<<finalAns;
// }





///////////////////////////////
//BINARY SEARCH ON 2-D MATRIX//
///////////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// bool binarysearch(int arr[5][4],int row,int col,int target){
//     int s =0;
//     int e = row*col - 1;
//     int mid = (s+e)/2;

//     while(s<=e){
//         int rowindex = mid/col;
//         int colindex = mid%col;
//         if(arr[rowindex][colindex]==target){
//             cout<<"found at "<<rowindex<<","<<colindex<<endl;
//             return true;
//         }
//         else if(arr[rowindex][colindex]<target){
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = (s+e)/2;
//     }
//     return false;
// }
// int main(){
//     int arr[5][4] = {{1,2,3,4},
//     {5,6,7,8},
//     {9,10,11,12},
//     {13,14,15,16},
//     {17,18,19,20}
//     };
//     int row = 5;
//     int col = 4;
//     int target = 19;
//     bool ans = binarysearch(arr,row,col,target);
//     if(ans){
//         cout<<"FOUND";
//     }
//     else{
//         cout<<"NOT FOUND";
//     }
// }





///////////////////////////////
//BINARY SEARCH ON 2-D MATRIX// 
///////////////////////////////
//USING 2-D VECTORS//

// #include <iostream>
// #include <vector>

// using namespace std;

// bool binarySearch2D(vector<vector<int>>& matrix, int target) {
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     int low = 0, high = rows * cols - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         int midValue = matrix[mid / cols][mid % cols];

//         if (midValue == target) {
//             return true;
//         } else if (midValue < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     return false;
// }

// int main() {
//     int rows, cols;
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     vector<vector<int>> matrix(rows, vector<int>(cols));

//     cout << "Enter the elements of the matrix row by row:\n";
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cin >> matrix[i][j];
//         }
//     }

//     int target;
//     cout << "Enter the target value: ";
//     cin >> target;

//     bool found = binarySearch2D(matrix, target);
//     if (found) {
//         cout << "Target value found in the matrix.\n";
//     } else {
//         cout << "Target value not found in the matrix.\n";
//     }

//     return 0;
// }
