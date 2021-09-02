#include<iostream> 
using namespace std; 
class student 
{ 
               int roll_no; 
               char name[20]; 
               char class_st[8]; 
               int marks[5]; 
               float percentage; 
               float calculate(); 
               public: 
               void readmarks(); 
               void displaymarks(); 
}; 
float student::calculate() 
{ 
               percentage=0; 
               for(int i=0;i<5;i++) 
                              percentage+=marks[i]; 
               percentage=(percentage/5); 
               return percentage; 
} 
void student::readmarks() 
{ 
               cout<<"Enter the roll no.:"; 
               cin>>roll_no; 
               cout<<"Enter the name:"; 
               cin>>name; 
               cout<<"Enter the class studing in:"; 
               cin>>class_st; 
               cout<<"Enter the marks:"<<endl; 
               for(int j=0;j<5;j++){ 
                              cout<<"\tEnter mark "<<j+1<<":"; 
                              cin>>marks[j]; 
               } 
} 
void student::displaymarks() 
{ 
               cout<<"Roll no:"<<roll_no<<endl; 
               cout<<"Name:"<<name<<endl; 
               cout<<"Class:"<<class_st<<endl; 
               cout<<"Percentage:"<<calculate()<<endl; 
} 
int main() 
{ 
               student s1; 
               s1.readmarks(); 
               s1.displaymarks(); 
               return 0; 
} 