/*This code is originally coded by Mr.Tech*/ 
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
}
return 0;
} 