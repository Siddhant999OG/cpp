///////////////////
// LADDER 0 TO N //
///////////////////

// #include<iostream>
// using namespace std;

// int climbstair(int n){
//     if(n==0||n==1)
//     return 1;

//     int ans = climbstair(n-1)+climbstair(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;

//     int ans = climbstair(n);
//     cout<<ans<<endl;
// }




//////////////////
// SIMPLE PRINT //
//////////////////

// #include<iostream>
// using namespace std;
// void pri(int arr[], int n, int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<" ";

//     pri(arr,n,i+1);
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     int i = 0;
//     pri(arr, n, i);
// }




//////////////////
// FIND MAXIMUM //
//////////////////

// #include<iostream>
// #include<limits.h>
// using namespace std;

// void findmax(int arr[], int n, int i, int& maxi){
//     if(i>=n){
//         return;
//     }
//     if(arr[i]>maxi){
//         maxi = arr[i];
//     }


//     findmax(arr, n, i+1, maxi);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int maxi = INT_MIN;
//     int i=0;
//     findmax(arr, n, i, maxi);
//     cout<<maxi;
// }




////////////////////////////////
// STIRNG ME LETTER H YA NHII //
////////////////////////////////

// #include<iostream>
// using namespace std;

// bool checkkey(string str, int i, int n, char key){
//     if(i>=n){
//         return false;
//     }
//     if(str[i] == key){
//         return true;
//     }
//     return  checkkey(str, i+1, n, key);
// }
// int main(){
//     string str = "siddhantgautam";
//     int n = str.length();
//     char key = 'g';
//     int i=0;
//     bool ans = checkkey(str, i, n, key);

//     cout<<ans;
// }





///////////////////////////
// STIRNG MATCHING INDEX //
///////////////////////////

// #include<iostream>
// using namespace std;

// int check(string str, int i, int n, char key){
//     if(i>=n){
//         return -1;
//     }
//     if(str[i] == key){
//         return i;
//     }
//     return check(str, i+1, n, key);
// }
// int main(){
//     string str = "siddhantgautam";
//     int n = str.length();
//     int key = 'a';

//     int i = 0;
//     int ans = check(str, i, n, key);
//     cout<<ans;
// }




//////////////////////////////////////////
// STIRNG INDEX IF MULTIPLE SAME LETTER //
//////////////////////////////////////////

// #include<iostream>
// using namespace std;

// void check(string str, int i, int n, char key){
//     if(i>=n){
//         return;
//     }
//     if(str[i] == key){
//         cout<<i;
//     }
//     return check(str, i+1, n, key);
// }
// int main(){
//     string str = "siddhantgautamd";
//     int n = str.length();

//     int key = 'd';
//     int i = 0;

//     check(str, i, n, key);
// }




////////////////////////
// WANT TO STORE DATA //
////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std;
// void check(string str, int i, int n, char key, vector<int>& ans){
//     if(i>=n){
//         return;
//     }
//     if(str[i]==key){
//         ans.push_back(i);
//     }
//     return check(str, i+1, n, key, ans);
// }
// int main(){
//     string str = "siddhantguutamd";
//     int n = str.length();
//     char key = 'd';
//     int i = 0;
//     vector<int> ans;
//     check(str, i, n, key, ans);
//     for(auto val: ans){
//         cout<<val;
//     }
//     cout<<endl;
// }




////////////////////////////////////////
// PRINT ALL THE DIGIT OF THIS NUMBER //
////////////////////////////////////////

// #include<iostream>
// using namespace std;
// void printdigit(int n){
//     if(n==0){
//         return ;
//     }
//     int digit = n%10;
//     cout<<digit<<" ";
//     int newvalue = n/10;
//     printdigit(newvalue);

// }
// int main(){
//     int n = 6470;
//     if(n==0){
//         cout<<0<<endl;
//     }
//     printdigit(n);
// }