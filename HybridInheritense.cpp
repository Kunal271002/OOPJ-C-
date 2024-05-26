#include<iostream> //More than one level of Inheritence.
using namespace std;
class MAPS{

    public: 
        MAPS(){
            cout<<"This is Maps Franchise"<<endl;
        };
};

class MAPSTUTORIALS : public MAPS{
    public:
        MAPSTUTORIALS(){
            cout<<"This is Maps Tutorials"<<endl;
        }
};
class MAPSIITJEE : public MAPS{
    public:
        MAPSIITJEE(){
            cout<<"This is Maps IIT-JEE & MEDICAL"<<endl;
        }
};


class Teacher : public MAPSTUTORIALS{
    public: 
        Teacher(){
            cout<<"Omkar sir, Pankaj sir, Narendra sir, Kunal sir"<<endl;
        };
};






int main(){

    Teacher Kunal;
    return 0;
}