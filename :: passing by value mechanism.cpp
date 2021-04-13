// passing by value mechanism 
/*A parameter that receives a copy of the value of the corresponding argument.
*/
#include <iostream>
using namespace std; 
// 1. function prototype 
void Update2Int(int , int ); 

int main() {
    
int x=100;// 
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