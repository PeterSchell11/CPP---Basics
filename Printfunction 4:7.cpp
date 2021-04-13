//User-Defined Functions
/*Type 1: void functions 
Type 2: Value-returning functions 
*/

// Type 2:  Value-returning functions 

#include<iostream>
using namespace std;
//function definition 
int sum(int,int);//prototype  ; 12
int printfunction();
void pintfunction();


void printfunction1();

int main()
{
 int a,b; 
 //call the function 
 // what is formal and actual variable? 
 a=3;
 b=2;
// call the function 
 int answer=sum(a,b); //parameter //sum(3,2) ; name of function has to match 12
 cout<<answer;

printfunction();
}//main
 int sum(int x, int y){//formal paratmeters
    //value a is copied to x, valued b is copied to y
  int k=x+y;  

    return  k;

}
void printfunction(){

cout<<"=============="<<endl;

}

void printfunction1(){

cout<<"=============="<<endl;

}







