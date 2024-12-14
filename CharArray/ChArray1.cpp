// #include<iostream>
// using namespace std;

// int main(){
//     char ch[10];
//     cin>>ch;
//     cout<<"Your name is :"<<ch;
// }

//THERE WILL BE A NULL CHAR AT THE END IT IS BYDEFAULT//

// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100];
//     cin>>ch;
//     for(int i=0; i<17; i++){
//         cout<<"Index : "<<i<<" Value : "<<ch[i]<<endl;

//         //char to integer value

//         int value = (int)ch[i];
//         cout<<"The value is : "<<value<<endl;
//     }
// }


//IF WE WANT TO PRINT THE WHOLE INSTEAD OF SPACE , TAB , ENTER//

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     cout<<ch;
// }


////////////////////////
//LENGTH OF THE STRING//
////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlength(char ch[]){
//     int length = 0;
//     int i = 0; 
//     while(ch[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }
// int main(){
//     char ch[100];
//     cin>>ch;
//     cout<<"The length is : "<<getlength(ch)<<endl;
//     cout<<"The length-> "<<strlen(ch);
// }




//////////////////
//REVERSE STRING//
//////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlength(char ch[]){
//     int length = 0;
//     int i = 0; 
//     while(ch[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }

// void revString(char ch[]){
//     int i=0;
//     int n = getlength(ch);
//     int e = n-1;

//     while(i<=e){
//         swap(ch[i], ch[e]);
//         i++;
//         e--;
//     }
// }
// int main(){
//     char ch[100];
//     cin>>ch;
//     cout<<"The length is : "<<getlength(ch)<<endl;
//     revString(ch);
//     cout<<"Reversed->"<<ch;
// }





//////////////////////////////////
//REPLACE SPACES WITH SOME OTHER//
//////////////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// void replace(char sent[]){
//     int i=0;
//     int e = strlen(sent);
//     for(int i=0; i<e; i++){
//         if(sent[i] == ' '){
//             sent[i] = '@';
//         }
//     }
// }
// int main(){
//     char sent[50];
//     cin.getline(sent,50);
//     replace(sent);
//     cout<<sent;
// }




//////////////
//PALINDROME//
//////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// bool palindrome(char word[]){
//     int s=0;
//     int n = strlen(word);
//     int e = n-1;

//     while(s<=e){
//         if(word[s]!=word[e]){
//             return false;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

// int main(){
//     char word[100] = "AMAN";
//     cout<<"check "<<palindrome(word);
// }





////////////////////////////
//LOWER CASE TO UPPER CASE//
////////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// int lowertoupper(char ch[]){
//     int n = strlen(ch);
//     for(int i=0; i<n; i++){
//         ch[i] = ch[i]-'a'+'A';
//     }
// }
// int main(){ 
//     char ch[100];
//     cin>>ch;
//     lowertoupper(ch);
//     cout<<ch;
// }





////////////////////////////
//UPPER CASE TO LOWER CASE//
////////////////////////////

// #include<iostream>
// #include<string.h>
// using namespace std;

// int uppertolower(char ch[]){
//     int n = strlen(ch);
//     for(int i=0; i<n; i++){
//         ch[i] = ch[i]-'A'+'a';
//     }
// }

// int main(){
//     char ch[100];
//     cin>>ch;
//     uppertolower(ch);
//     cout<<ch;
// }





////////////////////
//*****STRING*****//
////////////////////

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    string str2;
    getline(cin, str);
    getline(cin,str2);
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.empty()<<endl;
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout<<str.substr(0,6)<<endl;
    // if(str.compare(str2)==0){
    //     cout<<"str and str2 are same "<<endl;
    // }
    // else{
    //     cout<<"str and str2 are not same"<<endl;
    // }
    int ans = str.find(str2);
    cout<<ans;
}