// Class and object 2nd Lecture
//------------------------------------------

#include<iostream>
using namespace std;
class student
{
    string passcode;
public:
    string name;
    int id;
    student()
    {
    }
    student(string passcode,string name,int id)
    {
       this-> name =name;
        this->id =id;
        this->passcode=passcode;
    }
    void into()
    {
        cout<<"My name is "<<name<<"Id is "<<id<<"passcode is "<<passcode;
    }
    void setpass(string s)
    {
        passcode=s;
    }
};
int main()
{
    student s1;
    student s2("10","mohit",1);
    s2.into();

    return 0;
}
 51 changes: 51 additions & 0 deletions51  
freind class.cpp
