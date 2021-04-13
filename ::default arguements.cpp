//default arguements
#include<iostream> 
using namespace std; 
 /*
 
 A default argument is a value provided in a function declaration
 that is automatically assigned by the compiler if the caller of the function
 doesn’t provide a value for the argument with a default value.*/
// A function with default arguments, it can be called with  
// 2 arguments or 3 arguments or 4 arguments. 
int sum(int x, int y, int z=0, int w=0) //z and w are default values 
{ 
    return (x + y + z + w); //1.10+15+0+0 2.10+15+25+0 3.10+15+25+30
} 
  
/* Driver program to test above function*/
int main() 
{ 
    cout << sum(10, 15) << endl; //1
    cout << sum(10, 15, 25) << endl; //2
    cout << sum(10, 15, 25, 30) << endl; //3
    
}