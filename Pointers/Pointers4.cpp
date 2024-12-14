// #include<iostream>
// using namespace std;
// void util(int* p){
//     p = p+1;
// }
// int main(){
//     int a = 5;
//     int* p = &a;
//     cout<<"Before"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;

//     util(p);

//     cout<<"After"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }


// #include<iostream>
// using namespace std;
// void util(int* p){
//     *p = *p+1;
// }
// int main(){
//     int a = 5;
//     int* p = &a;
//     cout<<"Before"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;

//     util(p);

//     cout<<"After"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }



#include<iostream>
using namespace std;
void util(int** q){
    **q = **q+1;
}
int main(){
    int a = 5;
    int* p = &a;
    int**q = &p;
    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    util(q);

    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}

//////////////////////
//REFERENCE VARIABLE//
//////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//     int a =5;
//     int& b = a;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     a++;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     b++;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }





//////////////////////
//RETURN BY REFRENCE//
//////////////////////

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ans = &a;
//     return ans;
// }