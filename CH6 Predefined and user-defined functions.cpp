// predefined Functions 
#include<iostream>
#include<cmath>
using namespace std;



int main()
{
 
 int powResult=pow(2,4);//2^4=16
 cout<<"the result is "<<powResult<<endl;
 
 
 int sqrtResult=sqrt(16);
 cout<<"the result is "<<sqrtResult<<endl;
 
 double floortResult=floor(16.9);
 cout<<"the result is "<<floortResult<<endl;

 
}
////////////////////////////////////////////////////////////////////////////////////////////////

//User-Defined Functions
/* Type 1: void functions
Type 2: Value-returning functions 
*/

// Type 1: void functions. 

#include<iostream>
using namespace std;

// 1. function prototype 
void printFunction();
int main()
{
 int result; 
 
 //2. Function Call 
 printFunction();
 cout<<"inside the main funciton"<<endl;
 printFunction();
}// main 
// 3. function definition 
void printFunction(){
 cout<<"this is print Funcion "<<endl;    
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////

Chapter 6
//User-Defined Functions
/* Type 1: void functions
Type 2: Value-returning functions 
*/

// Type 1: void functions. 

#include<iostream>
using namespace std;

void printFunction(){
 cout<<"this is print Funcion "<<endl;    
}

int main()
{
 int result; 
 printFunction();
 cout<<"inside the main funciton"<<endl;
 printFunction();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//User-Defined Functions
/*Type 1: void functions 
Type 2: Value-returning functions 
*/

// Type 2:  Value-returning functions 

#include<iostream>
using namespace std;
//function definition 
int sum(int x, int y){
    
    
  return x+y;  
    
}

int main()
{
 int result,y,z; 
 //call the function 
 // what is formal and actual variable? 
 y=3;
 z=2;
// call the function 
 int x=sum(y,z);  
 cout<<x;
 
}
//////////////////////////////////////////////////////////////////////
reference parameters and formal parameters. 


// passing by value mechanism 
/*A parameter that receives a copy of the value of the corresponding argument.
*/
#include <iostream>
using namespace std; 
// 1. function prototype 
void Update2Int(int , int ); 

int main() {
    
int x=100; 
int y=200;
cout<<"The values before calling the function"<<endl;
cout<<"x= "<<x<<endl; 
cout<<"y= "<<y<<endl;
// 2. function call
Update2Int(x,y); 
cout<<"The values after calling the function"<<endl;
cout<<"x= "<<x<<endl; 
cout<<"y= "<<y<<endl;

} // main
//3. function definition 
void Update2Int(int  a1, int  a2){
a1=50; 
a2=60;
}
////////////////////////////////////////////////////////////////////////////////////////////

// passing by reference  mechanism 
/*A parameter that receives the location (memory address) of the caller’s argument.  
It’s corresponding type must have an ampersand (&) to data type name. */
#include <iostream>
using namespace std; 
// 1. function prototype 
void Update2Int(int& , int& ); 

int main() {
    
int x=100; 
int y=200;
cout<<"The values before calling the function"<<endl;
cout<<"x= "<<x<<endl; 
cout<<"y= "<<y<<endl;
// 2. function call
Update2Int(x,y); 
cout<<"The values after calling the function"<<endl;
cout<<"x= "<<x<<endl; 
cout<<"y= "<<y<<endl;

} // main
//3. function definition 
void Update2Int(int  & a1, int & a2){
a1=50; 
a2=60;
}

///////////////////////////////////////////////////////////////////////////////////

#include <iostream> 
using namespace std; 
// Function Overloading example 


void print(int i) { 
  cout << " Here is int " << i << endl; 
} 
void print(double  f) { 
  cout << " Here is float " << f << endl; 
} 
void print(string word ) { 
  cout << " Here is string  " << word<< endl; 
} 
  
int main() { 
  print(10); 
  print(10.10); 
  print("ten"); 
 
}
/////////////////////////////////////////////////////////////////////////////
#include<iostream> 
using namespace std; 
 /*
 
 A default argument is a value provided in a function declaration
 that is automatically assigned by the compiler if the caller of the function
 doesn’t provide a value for the argument with a default value.*/
// A function with default arguments, it can be called with  
// 2 arguments or 3 arguments or 4 arguments. 
int sum(int x, int y, int z=0, int w=0) 
{ 
    return (x + y + z + w); 
} 
  
/* Driver program to test above function*/
int main() 
{ 
    cout << sum(10, 15) << endl; 
    cout << sum(10, 15, 25) << endl; 
    cout << sum(10, 15, 25, 30) << endl; 
    
}








////////////////////////////