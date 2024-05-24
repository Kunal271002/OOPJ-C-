#include<iostream>
using namespace std;

class Name{ //Since Every Class Variables are private by default we can access the variables by using the function.
    int x;
    public:
    void get(int n){
        x = n;
    };
    int set(){
        return x;
    };
};
int main(){
    Name ABC;
    ABC.get(5);
    cout<<ABC.set();
    return 0;
}