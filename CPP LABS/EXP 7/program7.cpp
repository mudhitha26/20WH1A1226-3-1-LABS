#include<iostream>
#include<string>
using namespace std;
class student{
    int roll_no;
    string name;
    int marks;
    string grade;
    public:
        student(int roll_no,string name,int marks,string grade){
           this->roll_no=roll_no;
           this->name=name;
           this->marks=marks;
           this->grade=grade;
        }
       void display(){
          cout<<"Student Rollno is:"<<roll_no<<endl;
          cout<<"Student Name is:"<<name<<endl;
          cout<<"Student Marks is:"<<marks<<endl;
          cout<<"Student Grade is:"<<grade<<endl; 
        }
 };
 
int main(){
     student s1(12,"MEENAKSHI",75,"A");
     student s2(14,"HARINI",90,"A+");
     s1.display();
     s2.display();
     
     return 0;
  }
