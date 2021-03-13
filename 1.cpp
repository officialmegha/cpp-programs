#include <iostream>
using namespace std;

class Student{
    public:
    int roll_no;
    string name;
    int age;

    Student(){
        cout<<"constructor has been called"<<endl;
    }

    Student(int no,string name1,int age1){
        roll_no = no;
        name = name1;
        age = age1;
    }

    ~ Student(){
        cout<<"destructor has been called"<<endl;
    }

    // void registerStudent(int no,string name1,int age1){
    //     roll_no = no;
    //     name = name1;
    //     age = age1;
    // }

    void diplay(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<age<<endl;
    }
};

int main(){
    Student s;
    Student s1(1,"test",20),s2(2,"tes1",20);
    // s1.registerStudent(1,"test",20);
    // s2.registerStudent(2,"test2",20);

    s1.diplay();
    s2.diplay();
    
    return 0;
}
