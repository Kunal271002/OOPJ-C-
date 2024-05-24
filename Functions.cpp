#include<iostream>
using namespace std;

int Scope(int a, int b){

    int y;
    y = a + b;
    cout<<y;

};

int main(){
    int a = 10;
    int b = 5;
    cout<<Scope(a,b)<<endl  ;

    return 0;
}
