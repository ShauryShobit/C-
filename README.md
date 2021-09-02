# C++
Programs created using C++




Program 1: Write a program to sum of individual digits of a positive number. 

Algorithm: 

Step 1: Start 

Step 2: Read num as integer 

Step 3: while (num > 0) s = s + num % 10; num= num / 10 ;         end 

Step 4: Print sum of all 

Step 5: Stop 

Code 

#include<iostream> 

int main(){ 

int num, s = 0; 

std:: cout << "Enter the number : "; 

std:: cin >> num; 

while (num != 0){ 

s = s + num % 10; 

num= num / 10; 

}std::cout << "\nThe sum of the digits : "<< s;} 
 

 

 

Program 2: Write A Program To Generate First N Terms Of Fibonacci Series. 

Algorithm: 

Fibonacci(0) = 0, 
Fibonacci(1) = 1, 
Fibonacci(2) = Fibonacci(0) + Fibonacci(1) = 0 + 1 = 1 
Fibonacci(3) = Fibonacci(1) + Fibonacci(2) = 1 + 1 = 2 
Fibonacci(4) = Fibonacci(2) + Fibonacci(3) = 1 + 2 = 3 
… 
Fibonacci(n) = Fibonacci(n-2) + Fibonacci(n-1). 

Code 

#include <iostream> 

int main() { 

int n, t1 = 0, t2 = 1, nextTerm = 0; 

std::cout << "Enter the number of terms: "; 

std::cin >> n; 

std::cout << "Fibonacci Series: "; 

for (int i = 1; i <= n; ++i) { 

if(i == 1) { 

std::cout << t1 << ", "; 

 i++; 

} 

if(i == 2) { 

std::cout << t2; 

i++; 

} 

nextTerm = t1 + t2; 

t1 = t2; 

t2 = nextTerm; 

std::cout << ", "<< nextTerm ; 

}return 0;} 
 

 

Program 3: Write A Program To Generate All Prime Numbers From 1 To N. 

Algorithm: 

1. Input upper limit to print prime numbers from user. Store it in some variable. 

2. Run a loop from 2 to last variable, increment 1 in each iteration. 

 

Code 

#include <iostream> 

int main() { 

int x, i, upto; 

std::cout << "Prime numbers upto : "; 

std:: cin >> upto; 

std:: cout << endl << "All prime numbers are : "; 

for(x = 2; x <= upto; x++) { 

for(i = 2; i <= (x / 2); i++) { 

if(x % i == 0) { 

i = x; 

break; 

} 

} 

if(i != x) { 

std:: cout << x << " "; 

} 

}return 0;} 
 

 
Program 4: Write A Program Illustrating Class Declarations, Definitions & Accessing Class Members. 

 
Algorithm: 

Step 1-Create/Declare a class , provide it length, breadth and height 

Step 2-Create objects of class 

Step 3-Assign the required values to it 

Step 4-Run the function with the provided data 


Code 

#include <iostream> 

// create a class 

class Room { 

   public: 

    double length; 

    double breadth; 

    double height; 

    double calculateArea() { 

        return length * breadth; 

    } 

    double calculateVolume() { 

        return length * breadth * height; 

    } 

}; 

int main() { 

    // create object of Room class 

    Room room1; 

    // assign values to data members 

    room1.length = 42.5; 

    room1.breadth = 30.8; 

    room1.height = 19.2; 

    // calculate and display the area and volume of the room 

    std::cout << "Area of Room =  " << room1.calculateArea() << std::endl; 

    std::cout << "Volume of Room =  " << room1.calculateVolume() << std::endl; 

    return 0; 

}  

 

Program 5: Write A Program To Illustrate All Types Of Constructors : Default, Parameterized And Copy 

Algorithm: 

STEP 1:  Start the program. 

STEP 2:  Declare the class as Example with a and b variables. 

STEP 3:  Declare the 'Constructor declaration' in class 

STEP 4:  Define 'Constructor definition' outside Class with a and b initialization 

STEP 5:  Write function for display values a and b 

STEP 6:  Main function declaration and defintion 

STEP 7:  Create object for Example class in main Fucntion 

STEP 8:  Call display function using Example class object. 

STEP 9: Stop the program. 

Code 

#include <iostream> 

// declare a class 

class Wall { 

  private: 

    double length; 

    double height; 

  public: 

    // initialize variables with parameterized constructor 

    Wall(double len, double hgt) { 

      length = len; 

      height = hgt; 

    } 

    // copy constructor with a Wall object as parameter 

    // copies data of the obj parameter 

    Wall(Wall &obj) { 

      length = obj.length; 

      height = obj.height; 

    } 

    double calculateArea() { 

      return length * height; 

    }}; 

int main() { 

  // create an object of Wall class 

  Wall wall1(10.5, 8.6); 

  // copy contents of wall1 to wall2 

  Wall wall2 = wall1; 

  // print areas of wall1 and wall2 

  std::cout << "Area of Wall 1: " << wall1.calculateArea() << std::endl; 

  std::cout << "Area of Wall 2: " << wall2.calculateArea(); 

  return 0; 

} 

 
Program 6: Write A Program To Illustrate New & Delete Keywords For Dynamic Memory Allocation 

Algorithm: 

Step 1- Declares any two pointers  

Step 2- Dynamically allocate an int for loading the address for both 

Step 3- Pointer initialized with NULL value 

Step 4- Store value at allocated address 

Step 5- Request block of memory of size n 

Step 6- Fistly free the memory and then the block 

Code 

#include <iostream> 

using namespace std; 

int main () 

{ 

    // Pointer initialization to null 

    int* p = NULL; 

    // Request memory for the variable 

    // using new operator 

    p = new(nothrow) int; 

    if (!p) 

        cout << "allocation of memory failed\n"; 

    else 

    { 

        // Store value at allocated address 

        *p = 29; 

        cout << "Value of p: " << *p << endl; 

    } 

    // Request block of memory 

    // using new operator 

    float *r = new float(75.25); 

    cout << "Value of r: " << *r << endl; 

    // Request block of memory of size n 

    int n = 5; 

    int *q = new(nothrow) int[n]; 

    if (!q) 

        cout << "allocation of memory failed\n"; 

    else 

    { 

        for (int i = 0; i < n; i++) 

            q[i] = i+1; 

        cout << "Value store in block of memory: "; 

        for (int i = 0; i < n; i++) 

            cout << q[i] << " "; 

    } 

    // freed the allocated memory 

    delete p; 

    delete r; 

    // freed the block of allocated memory 

    delete[] q; 

    return 0; 

} 


 

Program 7: Write A Program To Demonstrate Friend Function For Addition Of Two Different Weights. 

Algorithm: 

STEP 1:  Start the program. 

STEP 2:  Declare the class name as Base with data members and member functions. 

STEP 3:  The function get() is used to read the 2 inputs from the user. 

STEP 4:  Declare the friend function mean(weight 1 or 2) inside the class. 

STEP 5:  Outside the class to define the friend function and do the following. 

STEP 6:  Return the mean value (ob.val1+ob.val2)/2 as a float. 

STEP 7:  Stop the program. 


Code 

//Write A Program To Demonstrate Friend Function For Addition Of Two Different Weights. 

#include<iostream> 

using namespace std; 

class temp 

{ 

  float weight1, weight2, add; 

  public: 

  void input() 

{ 

  cout << "Enter the value of weight 1 and weight 2:"; 

  cin >> weight1>>weight2; 

 } 

  friend void add(temp &t); 

  void display() 

 { 

   cout << "The sum is :" << add; 

 } 

}; 

  void add(temp &t) 

{ 

   t.add = t.weight1 + t.weight2; 

} 

  int main() 

{ 

   temp t1; 

   t1.input(); 

   add(t1); 

   t1.display(); 

   return 0; 

} 

 

Program 8: Write A Program To Implement A Class Student Performing Sum & Average Of Marks. 

Algorithm: 

Step1- Declare a class and declare all the required functions  

Step2- Start by providing all the functions there work 

Step3- Ask for required data from user to calculate the sum and avg. 

Step4- Display the output  

Code 

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
 

 

 
