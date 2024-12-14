// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     // creation
//     unordered_map<string, int> m;

//     // Insertion
//     pair<string, int> p = make_pair("Scorpio", 9);
//     m.insert(p);

//     pair<string, int> p2("Alto", 2);
//     m.insert(p2); 

//     m["Fortuner"] = 10;

//     // access
//     cout<<m.at("Alto")<<endl;
//     cout<<m.at("Scorpio")<<endl;
//     cout<<m["Fortuner"]<<endl;


//     // Search
//     cout<<m.count("Scorpio")<<endl;
//     if(m.find("Fortuner") != m.end()){
//         cout<<"Fortuner Found"<<endl;
//     }
//     else{
//         cout<<"Fortuner Not Found"<<endl;
//     }

//     cout<<m.size()<<endl;
//     cout<<m["Hummer"]<<endl;   // ye new entry create kr deta h
//     cout<<m.size()<<endl;      // isiliye size jyada aa gya h

//     for(auto i : m){
//         cout<<i.first<<"->"<<i.second<<endl;
//     }
// }




/////////////////////////////////////
// NUMBER OF TIMES LETTER OCCURING //
/////////////////////////////////////

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     string str = "thiruvananthapuram";
//     unordered_map<char, int> freq;
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];
//         freq[ch]++;
//     }

//     for(auto i : freq){
//         cout<<i.first<<"->"<<i.second<<endl;
//     }
// }




////////////////////
// CHECK CIRCULAR //
////////////////////

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// bool checkCircular(Node* head){
//     unordered_map<node*, bool> vis;
//     Node* temp = head;

//     while(temp!=NULL){
//         if(vis.find(temp) != vis.end()){
//             vis[temp] = true;
//         }
//         else{
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// int main(){
//     string str = "thiruvananthapuram";
//     unordered_map<char, int> freq;
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];
//         freq[ch]++;
//     }

//     for(auto i : freq){
//         cout<<i.first<<"->"<<i.second<<endl;
//     }
// }


// #include <iostream>
// #include <unordered_map>
// using namespace std;

// // Define the Node structure
// struct Node {
//     char data;
//     Node* next;
//     Node(char val) : data(val), next(nullptr) {}
// };

// bool checkCircular(Node* head) {
//     unordered_map<Node*, bool> vis;
//     Node* temp = head;

//     while (temp != NULL) {
//         if (vis.find(temp) == vis.end()) {
//             vis[temp] = true;
//         } else {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// int main() {
//     // Example for checking character frequency
//     string str = "thiruvananthapuram";
//     unordered_map<char, int> freq;
//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];
//         freq[ch]++;
//     }

//     for (auto i : freq) {
//         cout << i.first << "->" << i.second << endl;
//     }

//     // Example linked list creation for checkCircular function
//     Node* head = new Node('t');
//     head->next = new Node('h');
//     head->next->next = new Node('i');
//     head->next->next->next = head; // creating a circular linked list

//     // Checking if the linked list is circular
//     if (checkCircular(head)) {
//         cout << "Linked list is circular." << endl;
//     } else {
//         cout << "Linked list is not circular." << endl;
//     }
// }





