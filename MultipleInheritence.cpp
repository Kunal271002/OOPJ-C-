#include<iostream>
using namespace std;
// Making a parent Class

class Mother{
    public: 
        Mother(){
            cout<<"This is the Mother Class"<<endl;
        };
};
// Making a parent Class
class Father{
    public: 
        Father(){
            cout<<"This is the Father Class"<<endl;
        };
};

// Inherit both the parent class

class child : public Father, public Mother{
    public:
        child(){
            cout<<"This the Child"<<endl;
        };
};
int main(){

    child Shreyas; //This is Multi level Inheritence that the child class inherit parent class.
    return 0;
}