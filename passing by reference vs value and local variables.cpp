
#include <iostream>
using namespace std;

	//function definition
	int e;
	void Update2Int(int & a1, int a2){ //int & a1 - passing by reference ; a2 passing by value
	a1=50;
	a2=80;
	e=20;//global variable can be used anywhere in prgram
	}


int main(){
	
	int x = 100;//x and y are local to main function 
	int y=200;
	e=90;//global variable

for (int i=1; i<3; i++);//i is local variable can only use in i block
if(true){
	int k=40;//k is local variable 
}//Not sure why



	//function call
	Update2Int(x,y);//a1,a2
 cout<<x<<endl<<y<<endl;//x=50 , y=200


}//main







