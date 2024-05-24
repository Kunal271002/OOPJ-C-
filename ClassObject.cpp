#include<iostream>
using namespace std;


class Student{
public: 
    string Name;
    int Rollno; 
};

int main(){
    
    Student Kunal; //object 
    Kunal.Name = "Kunal";  //object Name
    Kunal.Rollno = 56; //Oject Roll No
    cout<<Kunal.Name<<" - "<<Kunal.Rollno<<endl;


    Student *Shreyas = new Student();      //Arrow Operator 
    Shreyas->Name = "Shreyas";
    Shreyas->Rollno = 55;
    cout<<Shreyas->Name<<" - "<<Shreyas->Rollno;




    return 0;
}