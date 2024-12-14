/////////////////////////////////
// PRIPRITY QUEUE --> MAX HEAP //
/////////////////////////////////

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     priority_queue<int> pq;
//     pq.push(3);
//     pq.push(6);
//     pq.push(9);
//     pq.push(4);
//     pq.push(8);

//     cout<<"Top element is : "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Top element is : "<<pq.top()<<endl;
// }




/////////////////////////////////
// PRIPRITY QUEUE --> MIN HEAP //
/////////////////////////////////

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int> > pq;
//     pq.push(3);
//     pq.push(6);
//     pq.push(9);
//     pq.push(4);
//     pq.push(8);

//     cout<<"Top element : "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Top element : "<<pq.top()<<endl;
//     pq.pop();
// }




//////////////////////////
// Kth SMALLEST ELEMENT //
//////////////////////////

// #include<iostream>
// #include<queue>
// using namespace std;

// int getKthLargest(int arr[], int n, int k){
//     priority_queue<int, vector<int>, greater<int> > pq;
//     for(int i=0; i<k; i++){
//         pq.push(arr[i]);
//     }

//     for(int i = k; i<n; i++){
//         int element = arr[i];
//         if(element > pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     int ans = pq.top();
//     return ans;
// }

// int getKthSmallest(int arr[], int n, int k){
//     priority_queue<int> pq;
//     for(int i=0; i<k; i++){
//         pq.push(arr[i]);
//     }

//     for(int i = k; i<n; i++){
//         int element = arr[i];
//         if(element < pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     int ans = pq.top();
//     return ans;
// }

// int main(){
//     priority_queue<int> pq;
//     int arr[] = {10,5,20,4,15};
//     int n = 5;
//     int k = 1;
//     int ans = getKthSmallest(arr,n,k);
//     cout<<"Ans is : "<<ans;

//     cout<<endl;

//     int ans1 = getKthLargest(arr,n,k);
//     cout<<"Ans is : "<<ans1;
// }





// #include<iostream>
// #include<queue>
// #include<limits.h>
// #include<algorithm>
// using namespace std;

// pair<bool, int> solve(Node* root){
//     if(root == NULL){
//         pair<bool, int> p = make_pair(true, INT_MIN);
//         return p; 
//     }
//     if(root->left == NULL && root->right == NULL){
//         pair<bool, int> p = make_pair(true, root->data);
//         return p; 
//     }

//     pair<bool, int> leftans = solve(root->left);
//     pair<bool, int> rightans = solve(root->right);

//     if(leftans == true && rightans == true && root->data > leftans.second && root->data > rightans.second){
//         pair<bool, int> p = make_pair(true, root->data);
//         return p;
//     }
//     else{
//         pair<bool, int> p = make_pair(false, root->data);
//         return p;
//     }
// }





/////////////////////////////
// CONVERT CBT TO MAX HEAP //
/////////////////////////////

