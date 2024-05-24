#include<iostream>
using namespace std;

class Parent{

public:
    int x;
private:
    int y;
protected:
    int z;
};

class child1 : public Parent{
    // x can be inhereted From the Parent as a public variable;
    // z can be inhereted From the Parent as a public variable;
};
class child2 : private Parent{
    // x can be inhereted From the Parent as a private variable;
    // z can be inhereted From the Parent as a private variable;
};
class child3 : protected Parent{
    // x can be inhereted From the Parent as a protected variable;
    // z can be inhereted From the Parent as a protected variable;
};
int main(){

    return 0;
}