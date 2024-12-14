// #include<iostream>
// using namespace std;

// class animal{

// };

// int main(){
//     cout<<"The size of class is: "<<sizeof(animal);
// }



// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//     int age;
//     string name;

//     void eat(){
//         cout<<"Sher is eating"<<endl;
//     }

//     void sleep(){
//         cout<<"cheeta is sleeping"<<endl;
//     }
// };

// int main(){
//     Animal ramesh;
//     ramesh.age = 12;
//     ramesh.name = "lion";
//     cout<<"Age of ramesh is: "<<ramesh.age<<endl;
//     cout<<"name of ramesh is: "<<ramesh.name<<endl;
//     ramesh.eat();
//     ramesh.sleep();
// }


// #include<iostream>
// using namespace std;

// class Animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     void eat(){
//         cout<<"eating"<<endl;
//     }

//     void sleeping(){
//         cout<<"sleeping"<<endl;
//     }

//     int getWeight(){
//         return weight;
//     }

//     void setWeight(int w){
//         weight = w;
//     }
// };

// int main(){
//     Animal ramesh;
    
//     ramesh.setWeight(10);
//     cout<<"weight: "<<ramesh.getWeight();
// }




// DYNAMIC MEMORY ALLOCATION

// #include<iostream>
// using namespace std;

// class Animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;
//     }

//     int getweight(){
//         return weight;
//     }

//     void setweight(int w){
//         weight = w;
//     }
// };

// int main(){
//     Animal* suresh = new Animal;
//     suresh->age = 12;
//     suresh->name = "billi";

//     suresh->eat();
//     suresh->sleep();
//     suresh->setweight(110);
//     cout<<suresh->getweight();
// }




//  DEFAULT CONSTRUCTOR

// #include<iostream>
// using namespace std;

// class Animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     Animal(){
//         this->weight = 0;
//         this->age = 0;
//         this->name = "";
//         cout<<"Constructor Called"<<endl;
//     }

//     void eat(){
//         cout<<"eating"<<endl;
//     }
//     void sleep(){
//         cout<<"sleeping"<<endl;
//     }

// };

// int main(){
//     Animal a;
//     Animal* b = new Animal;
// }




// PARAMETERISED CONSTRUCTOR

// #include<iostream>
// using namespace std;

// class Animal{
//     private:
//     int weight;
//     public:
//     int age;
//     string name;

//     Animal(int age){
//         this->age = age;
//         cout<<"Parameterised called"<<endl;
//     }

//     Animal(int age, string name){
//         this->age = age;
//         this->name = name;
//         cout<<"Parameterised 2 called"<<endl;
//     }

// };

// int main(){
//     Animal a(10);
//     Animal* b = new Animal(110, "confi");
// }



// copy constructor

#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;
    public:
    int age;
    string name;

    Animal(int age){
        this->age = age;
        cout<<"Parameterised called"<<endl;
    }

    Animal(int age, string name){
        this->age = age;
        this->name = name;
        cout<<"Parameterised 2 called"<<endl;
    }

    Animal(Animal& obj){
        this->weight = weight;
        this->age = age;
        this->name = name;
        cout<<"I am inside copy constructor"<<endl;
    }
};

int main(){
    Animal a(10);
    Animal* b = new Animal(110, "confi");

    Animal c = a;
}