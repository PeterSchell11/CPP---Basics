#include <iostream>
#include <numeric>

using namespace std;
//sum of array values
int findSum(int[],int);
int findMin(int[],int);

   

int main(){
	
	int testMain[4]={1,3,5,0};//
  int s = sizeof(testMain)/sizeof(testMain[0]);
	int sum=0;

	
  cout<<"the sum of the array is "<< findSum(testMain,4) <<"  " <<endl;

  int minvalue=findMin(testMain,4);
  cout<<"the min value in array is "<<minvalue << endl;

  return 0;
}//main


int findSum(int test1[],int s){
  int sum;
  return accumulate(test1, test1+s, sum);
}

int findMin(int test2[], int s){
int minvalue=test2[0];
    for (int i=1;i<s;i++)
if (test2[i]< minvalue)
	minvalue=test2[i];

return minvalue;
} 


