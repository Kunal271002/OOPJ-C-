#include<iostream>
using namespace std;
// Making a parent Class

class Parent{
    public: 
        Parent(){
            cout<<"This is the Parent Class"<<endl;
        };
};
// Making a child class inheriting Parent class properties.
class child : public Parent{
    public: 
        child(){
            cout<<"This is the child Class"<<endl;
        };
};
class Grandchild : public child{
    public:
        Grandchild(){
            cout<<"This the Grandchild"<<endl;
        };
};
int main(){

    Grandchild Shreyas;//This is Multi level Inheritence that the child class inherit parent class.
    return 0;
}