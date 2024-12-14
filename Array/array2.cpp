////////////////////////
//INITIALISING VECTORS//
////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr;
//     cout<<arr.size();
//     cout<<endl;

//     arr.push_back(5);
//     arr.push_back(6);

//     for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     arr.pop_back();

//     for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;



//     int n;
//     cout<<"enter the value of n->";
//     cin>>n;
//     vector<int> brr(n,-1);
//     for(int i=0; i<brr.size(); i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;



//     vector<int> crr{10,20,30,40,50};
//     for(int i=0; i<crr.size(); i++){
//         cout<<crr[i]<<" ";
//     }
// }




//FIND UNIQUE ELEMENTS OCCURS //

// #include<iostream>
// #include<vector>
// using namespace std;

// int findUnique(vector<int> arr){
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     int ans = findUnique(arr);
//     cout<<ans;
// }




//UNION OF TWO ARRAYS//

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;

//     vector<int> arr(n);
//     vector<int> brr(m);
//     vector<int> ans;

//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<brr.size(); i++){
//         cin>>brr[i];
//     }

//     for(int i=0; i<arr.size(); i++){
//         ans.push_back(arr[i]);
//     }

//     for(int i=0; i<brr.size(); i++){
//         ans.push_back(brr[i]);
//     }

//     sort(ans.begin(), ans.end());

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// }




//INTERSECTION OF TWO ARRAYS//


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;

//     vector<int> arr(n);
//     vector<int> brr(m);
//     vector<int> ans;

//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<brr.size(); i++){
//         cin>>brr[i];
//     }

//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<brr.size(); j++){
//             if(arr[i] == arr[j]){
//                 ans.push_back(arr[i]);
//             }
//         }
//     }

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// }




//KISI EK ARRAY ME SAME NUMBER H//
// 1,2,3,3,4,6,8
// 3,3,4,8,9
// isse 4 baar 3 na aaye esa kro 
// mtlb 3 sirf 2 baar aaye

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    vector<int> brr(m);
    for(int i=0; i<brr.size(); i++){
        cin>>brr[i];
    }
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j] = -1; //[yha pr jo value match kr gyi to uski value -1 se replace ho jayegi jisse vo array 1 ke same element se match na kre]
                ans.push_back(arr[i]);
            }
        }
    }
    for(auto value: ans){
        cout<<value<<" ";
    }
}



//SUM OF PAIR//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     cin>>sum;

//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j] == sum){
//                 cout<<"Pair found"<<endl;
//             }
//         }
//     }
// }



//TRIPLET SUM//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     cin>>sum;

//     vector<int> arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             for(int k=j+1; k<arr.size(); k++){
//                 if(arr[i]+arr[j]+arr[k] == sum){
//                     cout<<i<<j<<k;
//                 }
//             }
//         }
//     }
// }




//SORT 0'S AND 1'S//

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int start = 0;
//     int end = arr.size()-1;
//     int i=0;

//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     while(i != end){
//         if(arr[i] == 0){
//             swap(arr[start], arr[i]);
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[end], arr[i]);
//             end--;
//         }
//     }
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
// }