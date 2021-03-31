//review passing by value and passing by referance

#include <iostream>
using namespace std;

//Passing by value
void passingByValue(int x){//x is formal
	x=400;
}

//passing by referance
void passingByRef(int&x){//&signifies passing by referance
	x=400;
}//k and x share a memory space

int main()
{
	int k=100;
	passingByValue(k);//k is actual
	cout << k << endl;

	
	passingByRef(k);//k is actual
  cout << k << endl;

}//main