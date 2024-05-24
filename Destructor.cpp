#include<iostream>
using namespace std;

class Students{
public:
    string Name;
    int Rollno;
    int Standard;

    // Students(){
    //     Name = "Kunal";
    //     Rollno = 55;
    //     Standard = 7;
    // };
    ~Students(){
        cout<<"Constructor is Called ";
    }
};

int main(){

    Students* S1 = new Students();
    S1->Name = "Kunal";
    S1->Rollno = 55;
    S1->Standard = 7;
    cout<<S1->Name<<" "<<S1->Rollno<<" "<<S1->Standard<<endl;
    delete S1;

    Students* S2 = new Students();
    S2->Name = "Shreyas";
    S2->Rollno = 54;
    S2->Standard = 8;
    cout<<S2->Name<<" "<<S2->Rollno<<" "<<S2->Standard;



    return 0;
}