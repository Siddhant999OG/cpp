//SELECTION SORT//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         int mini = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[mini]){
//                 mini = j;
//             }
//         }
//         cout<<arr[mini]<<endl;
//         swap(arr[i], arr[mini]);
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }




//BUBBLE SORT//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i];
//     }
// }




//INSERTION SORT//

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        int val = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j] > val){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = val;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}