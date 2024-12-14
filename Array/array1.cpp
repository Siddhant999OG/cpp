// printing the double value

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[50];
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         cout<<2*arr[i]<<" ";
//     }
// }




// functions for incrementing the value
// EXAMPLE 1

// #include<iostream>
// using namespace std;

// int increment(int a){
//     a++;
//     return a;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int ans = increment(n);
//     cout<< ans <<endl;
// } 



// EXAMPLE 2

// #include<iostream>
// using namespace std;

// int print(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void increment(int arr[], int size){
//     arr[0] = arr[0] + 10;
//     print(arr,size);
//     cout<<endl;
// }

// int main(){
//     int arr[] = {5,6};
//     int size = 2;
//     increment(arr, size);

//     print(arr, size);
// }





// LINEAR SEARCH

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int target){
//     for(int i=0; i<n; i++){
//         if(target == arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,13};
//     int n = 10;
//     int target = 6;
//     int ans = linearSearch(arr,n,target);
//     cout<<ans;
// }




// COUNT 0'S AND 1'S

// #include<iostream>
// using namespace std;

// // void findZeroAndOne(int arr[], int n, int &countZero,int &countOnes){
// //     countZero = 0;
// //     countOnes = 0;
// //     for(int i=0; i<n; i++){
// //         if(arr[i] == 0){
// //             countZero++;
// //         }
// //         else if(arr[i] == 1){
// //             countOnes++;
// //         }
// //     }
// // }

// int main(){
//     int arr[10] = {0,0,1,1,0,0,1,0,1,1};
//     int n = 10;
//     int countZero = 0;
//     int countOnes = 0;

//     for(int i=0; i<n; i++){
//         if(arr[i] == 0){
//             countZero++;
//         }
//         else if(arr[i] == 1){
//             countOnes++;
//         }
//     }

//     cout<<"Numbers of zero -> " <<countZero<<endl;
//     cout<<"Numbers of Ones -> " <<countOnes<<endl;
// }




// MAXIMUM NUMBER IN THE ARRAY

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
//     int arr[10] = {2,4,1,6,8,9,0};
//     int n=7;
//     int max = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<max;
// }


// MINIMUM NUMBER IN THE ARRAY

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
//     int arr[10] = {2,4,1,6,8,9,0};
//     int n=7;
//     int min = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<min;
// }




// PRINTING FIRST ELEMENT THEN LAST ELEMENT ANS SO ON

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {1};
//     int n = 1;
//     int start = 0;
//     int end = n-1;

//     while(true){
//         if(start>end){
//             break;
//         }

//         if(start == end){
//             cout<<arr[start]<<endl;
//         }
//         else{
//             cout<<arr[start]<< " ";
//             cout<<arr[end]<<" ";
//         }

//         start++;
//         end--;
//     } 
// }





// REVERSE AN ARRAY

#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4};
    int n = 4;
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}