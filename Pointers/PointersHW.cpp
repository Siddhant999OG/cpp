// #include<iostream>
// using namespace std;
// int main(){
//     float f = 10.5;
//     float p = 2.5;
//     float* ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout<<*ptr<<" "<<f<<" "<<p;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 7;
//     int* c = &a;
//     cout<<&c<<endl;
//     c = c+1;
//     cout<<a<<"  "<<*c<<" "<< c <<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = {1,2,3,4};
//     int* p = *a++;
//     cout<<*p<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    char arr[20];
    int i;
    for(int i=0; i<10; i++){
        *(arr+i) = 65+i;
    }
    *(arr+i) = '\0';
    cout<<arr;
}