#include <iostream>
using namespace std;

class Student{
    public:
    static int roll_no;
    string name;
    int age;


    Student(string name1,int age1){
        name = name1;
        age = age1;
        roll_no++;
        cout<<"\nStudent Registerd!\n";
    }

    void diplay(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<age<<endl;
    }
};

int Student::roll_no = 0;

int main(){
    cout<<"welcome to xyz school==================\n";
    int p;
    do{
        cout<<"1. register student \n 2. exit\n=====>";
        cin>>p;

        switch(p){
            case 1:
            {
                // register student
                int age;
                string name;
                cout<<"enter name:";
                cin>>name;
                cout<<"enter age:";
                cin>>age;
                Student s1(name,age);
                s1.diplay();
                break;
            }   
            case 2:
                p=2;
                break;
            default:
                cout<<"enter right choice\n";    
        }
    }while(p!=2);
    return 0;
}
