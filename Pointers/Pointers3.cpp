//////////////////
// PRIME NUMBER // METHOD 1 [ NAIVE ]
//////////////////

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<=1) return false;

//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int count(int n){
//     int c = 0;
//     for(int i = 0; i<n; i++){
//         if(isPrime(i)){
//             c++;
//         }
//     }
//     return c;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = count(n);
//     cout<<ans;
// }





//////////////////
// PRIME NUMBER // METHOD 2  [ SQRT ]
//////////////////

// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isPrime(int n){
//     if(n<=1) return false;
//     int sqrtN = sqrt(n);
//     for(int i=2; i<=sqrtN; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int count(int n){
//     int c=0;
//     for(int i=0; i<n; i++){
//         if(isPrime(i)){
//             c++;
//         }
//     }
//     return c;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = count(n);
//     cout<<ans;
// }




//////////////////
// PRIME NUMBER // METHOD 3  [SEIVE OF ERATOSTHENES]
//////////////////



// #include<iostream>
// #include<vector>
// using namespace std;

// int count(int n){
//     vector<bool> prime(n, true);
//     prime[0]=prime[1]=false;

//     int ans = 0;

//     for(int i=2; i<n; i++){
//         if(prime[i]){
//             ans++;

//             int j = 2*i;
//             while(j<n){
//                 prime[j] = false;
//                 j = j+i;
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans1 = count(n);
//     cout<<ans1;
// }









/////////////
// GDF/HCF // 
/////////////


// #include<iostream>
// using namespace std;

// int gcd(int n, int m){
//     if(n==0) return m;
//     if(m==0) return n;

//     while(n>0 && m>0){
//         if(n>m){
//             n = n-m;
//         }
//         else{
//             m = m-n;
//         }
//     }
//     return n==0 ? m : n;
// }
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int ans = gcd(n,m);
//     cout<<ans;
// }








/////////
// LCM //
/////////


// #include<iostream>
// using namespace std;

// int gcd(int n, int m){
//     if(n==0) return m;
//     if(m==0) return n;

//     while(n>0 && m>0){
//         if(n>m){
//             n = n-m;
//         }
//         else{
//             m = m-n;
//         }
//     }
//     return n==0 ? m : n;
// }
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int ans = gcd(n,m);
//     cout<<(n*m)/ans;
// }




///////////
// POWER //
///////////

// #include<iostream>
// using namespace std;

// int expo(int n, int m){
//     int ans = 1;
//     for(int i=0; i<m; i++){
//         ans = ans*n;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;

//     int ans1 = expo(n,m);
//     cout<<ans1;
// }





///////////
// POWER //  METHOD 2 FAST
///////////

#include<iostream>
using namespace std;

int expo(int n, int m){
    int ans = 1;
    while(m>0){
        if(m&1){
            ans = ans*n;
        }
        n = n*n;
        m>>=1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int ans1 = expo(n,m);
    cout<<ans1;
}