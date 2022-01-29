#include<iostream>
#include<string>
using namespace std;

class employee{
       public:
         string name;
         int salary;
         int e_id;
         void read();
         void display();
         
     };
     
int main(){
     employee e1;
     employee *ptr=&e1;
     ptr->read();                        //(*ptr).read();              
     ptr->display();                     // (*ptr).display();           
    
     return 0;
     }
     
void employee :: read(){
     cout<<"Enter Name,Salary,Employee id"<<endl;
     cin>>name>>salary>>e_id;
     }
void employee :: display(){
     cout<<"Employee Details Are:"<<endl;
     cout<<"Employee_name:"<<name<<endl<<"Employee_salaary:"<<salary<<endl<<"Employee_id:"<<e_id<<endl;
     }
