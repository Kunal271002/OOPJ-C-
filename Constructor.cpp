#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;
    
    Rectangle(){        //Default Constructor             
        l = 0;
        b = 0;
    };
    Rectangle(int x, int y){   //Parametric Constructor;
        l = x;
        b = y;
    }
    Rectangle(Rectangle& r){  //Copy Constructor;
        l = r.l;
        b = r.b;
    }
};

int main(){

    Rectangle R1;
    cout<<R1.l<<R1.b;

    Rectangle R2(5,7);
    cout<<R2.l<<R2.b;

    Rectangle R3 = R1;
    cout<<R3.l<<R3.b;

    return 0;
}