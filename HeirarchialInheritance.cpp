#include<iostream>
using namespace std;
// Making a parent Class

class Parent{
    public: 
        Parent(){
            cout<<"This is the Parent Class"<<endl;
        };
};

class child1 : public Parent{
    public: 
        child1(){
            cout<<"This is the child1 Class"<<endl;
        };
};

// Inherit both the parent class

class child2 : public Parent{
    public: 
        child2(){
            cout<<"This is the child2 Class"<<endl;
        };
};
int main(){

    child1 Shreyas; //This is Multi level Inheritence that the child class inherit parent class.
    child2 Nishad; //This is Multi level Inheritence that the child class inherit parent class.
    return 0;
}