//PRINTING 2-D ARRAY//

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;

//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<endl;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }



//ROW SUM PRINT//

// #include<iostream>
// using namespace std;

// void print(int arr[3][3], int n, int m){
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=0; j<m; j++){
//             sum += arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// int main(){
//     int n = 3;
//     int m = 3;

//     int arr[3][3];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     print(arr,n,m);
// }




//LINEAR SEARCH IN 2-D ARRAY//

// #include<iostream>
// using namespace std;

// bool find(int arr[3][3], int n, int m, int target){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int n=3;
//     int m=3;
//     int arr[3][3];

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int target = 4;
//     bool ans = find(arr, n, m, target);
//     if(ans){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
// }




//MIN AND MAX NUMBER IN 2-D ARRAY//

// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findMinAndMax(int arr[3][3], int n, int m){
//     int max = INT_MIN;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] > max){
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout<<max;
// }
// int main(){
//     int n=3;
//     int m=3;
//     int arr[3][3];

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     findMinAndMax(arr,n,n);
// }




//TRANSPOSE A MATRIX//

// #include<iostream>
// using namespace std;
// void spp(int arr[][3], int n, int m, int transpose[][3]){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             transpose[j][i] = arr[i][j]; 
//         }
//     }
// }
// void print(int arr[][3], int n, int m){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
//     int n=3;
//     int m=3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     int transpose[3][3];
//     spp(arr,n,m, transpose);
//     print(transpose,n,m);
// }





//VECTOR 2-D ARRAY//


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int> > arr;

//     vector<int> a{1,2,3};
//     vector<int> b{4,5,6};
//     vector<int> c{7,8,9};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     for(int i=0; i<arr.size(); i++){
//         for(int j =0; j<arr[i].size(); j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }




////////////////////
//VECTOR 2-D ARRAY// METHOD 2
////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<vector<int>> arr(3, vector<int>(5,0));
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr[0].size(); j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr(5, vector<int>(5,-8));
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr[i].size(); j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<arr[2][3];
// }
