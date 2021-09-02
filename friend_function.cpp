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