 #include<iostream>

 #include "Department.h"
  std::cout << "Hello World!\n";
    
 class Student
    {
        private:
        int roll_number;
        std::string_name;
        float_fees;
        char_grade;
       Department _dept; //IT, CS ,AI, ML

       public:
       Student() =default;
       Student(
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
        )
        {
            this->_name=name;
            this->_fees=fees;
            this->_roll_number=rnum;
            this->_grade=grade;
            this->_dept=dept;
        }
       ~Student(){ //destructor
        std::cout<<"student with roll no:"
        <<this->_roll_number
        <<"is now destroyed\n";
       }
        
    };

int main(){
    //STACK--AUTOMATIC STORAGE//get deleted automatically
    Student s1(101,"niraj",87777.0f,'A',Department::CS);
    Student s3(103,"aakash",87776.0f,'A',Department::IT);


    //HEAP--will not get deleted automatically
   Student* s2= new Student(102,"shubham",87776.0f,'A',Department::AI_ML);
   Student* s4= new Student(104,"darpan",87775.0f,'A',Department::AI_ML);
   delete s2; //to delete object in heap

  Student arr[2] = {s1,s3}; //array of stack allocated student objects
//    Student* heapArr[1]={s2};
 Student* heapArr[2]={s2,s4};
 
}