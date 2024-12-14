// ENCAPSULATION

#include<iostream>
using namespace std;

class Animal{
    private:
    int age;
    int weight;

    public:
    void eat(){
        cout<<"eating"<<endl;
    }

    int getAge(){
        return this->age;
    }

    void setAge(int age){
        this->age = age;
    }
};

int main(){
    Animal* suresh = new Animal;
    suresh->setAge(110);
    cout<<suresh->getAge();
}




// INHERITENCE

// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//     int age;
//     int weight;

//     void eat(){
//         cout<<"Sherr"<<endl;
//     }
// };

// class child : public Animal{

// };

// int main(){
//     child a;
//     a.eat();
// }




// SINGLE LEVEL INHERITENCE

// #include<iostream>
// using namespace std;

// class Car{
//     public:
//     string name;
//     int milage;

//     void speedup(){
//         cout<<"Speeding up"<<endl;
//     }

//     void breaklagado(){
//         cout<<"Mardi break"<<endl;
//     }
// };

// class subModel : public Car{

// };

// class category : public subModel{

// };

// int main(){
//     category c;
//     c.speedup();
// }



// MULTIPLE INHERITENCE

// #include<iostream>
// using namespace std;

// class Car{
//     public:
//     string name = "Raju";
// };

// class subModel{
//     public:
//     string surname = "Kaju";
// };

// class category : public Car, public subModel{
//     public:
//     string bhakk = "muah";
// };

// int main(){
//     category c;
//     cout<<c.name<<" "<<c.surname<<" "<<c.bhakk<<endl;
// }




// HEIRARICHAL

// #include<iostream>
// using namespace std;

// class Car{
//     public:
//     string name;
//     int milage;

//     void speedup(){
//         cout<<"Speeding up"<<endl;
//     }

//     void breaklagado(){
//         cout<<"Mardi break"<<endl;
//     }
// };

// class subModel : public Car{

// };

// class category : public Car{

// };

// int main(){
//     category c;
//     c.speedup();

//     subModel s;
//     s.speedup();
// }





// POLYMORPHISM

//  1. COMPILE TIME 

// function overloading

// #include<iostream>
// using namespace std;

// class Math{
//     public:
//     int sum(int a, int b){
//         return a+b;
//     }

//     int sum(int a, int b, int c){
//         return a+b+c;
//     }
// };

// int main(){
//     Math obj;
//     cout<<obj.sum(1,2)<<endl;
//     cout<<obj.sum(1,2,3)<<endl;
// }




// operator overloading

// #include<iostream>
// using namespace std;

// class Param{
//     public:
//     int val;

//     void operator+(Param& obj2){
//         int value1 = this->val;
//         int value2 = obj2.val;
//         cout<<(value2 - value1);
//     }
// };

// int main(){
//     Param obj1, obj2;
//     obj1.val = 5;
//     obj2.val = 8;
//     obj1+obj2;
// }