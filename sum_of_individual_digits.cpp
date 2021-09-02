#include<iostream>
int main(){ 
int num, s = 0; 
std:: cout << "Enter the number : "; 
std:: cin >> num; 
while (num != 0){ 
s = s + num % 10; 
num= num / 10; 
}
std::cout << "\nThe sum of the digits : "<< s;
} 