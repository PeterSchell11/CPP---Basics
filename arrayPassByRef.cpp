


//review
/*
int array[4];//size four
index[]//0,1,2,3

cout<<arrtest[4]//last one*/

////////////////////////////////////////
#include <iostream>
using namespace std;

void PassingbyReferArray(int[],int );

int main()
{

	int arrtest[3]={100,-2,-3};
	//call the function
	//arrtest(0)is100 ;arrtest(1)is-2;arrtest(2)is-3
	//12 bytes 4

	PassingbyReferArray(arrtest,3);

for(int i=0;i<=2;i++)//0 1 2 
cout<<arrtest[i]<<" ";
cout<<endl;

}//main

void PassingbyReferArray(int test1[])
{
	test1[0]=200;//changes arrtest(0)
}





