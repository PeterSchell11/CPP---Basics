#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//Q1
void initialize(double list[],int size){

for(int i=0; i<size;i++){
cout<<"Enter the value at index ["<<i<<"] : ";
cin>>list[i];
    }

}//initialize

void print(double list[],int size){

for (int i=0;i<size;i++){   
    for (int j=0;j<size;j++)    
        for (int k=j+1;k<size;k++)
          if (list[i]==list[j]+list[k]) 
            cout<< list[i] <<" is the sum with this pair : "<< list[j] << " and "<<list[k]<<endl;//print the number with its pairs
  } // for i
}//voidprint

//Q2
const int rows=5;
const int cols=5;
void fillboard(int b[][cols]);
void showboard(int b[][cols]);
void findpeaks(int b[][cols],int rows);


int main(){
  //Q1
  int sz = 5;
  double alpha[sz];

  initialize(alpha,sz);
  print (alpha,sz);

  //Q2
  int board[rows][cols];

  fillboard(board);
  showboard(board);
  findpeaks(board,rows);  

return 0;
}
void showboard(int b[][cols]){
  for (int i=0; i<5;i++) { 
    for (int j=0; j<5; j++) { 
      cout << "Element at b[" << i << "][" << j << "]: "; 
        cout << b[i][j]<<endl; 
        } //end for
    } //end for
}//end showboard function



void fillboard(int b[][cols]){

  srand(time(0));

  for(int i=0; i<rows; i++)
    for(int j=0; j<cols; j++)
      b[i][j]=rand();
  }

void findpeaks(int b[][cols],int rows){
int current=0;
int neighbor=0;

for (int i=0; i<rows-1; i++)
  for(int j=1; j<cols-1; j++){//f2
    current=b[i][j];//current at 0,0
    for(int k=i-1; k<=i+1; k++){//f3
      for(int l=j-1; l<=j+1; l++){//f4 ;    
        neighbor=b[k][l];
        if (current>neighbor){
          cout<<"Maximum peak at b[" << i << "][" << j << "]: "; 
        
          cout << b[i][j]<<endl;
        }
        if (current<neighbor){
          cout<<"Minimum peak at b[" << i << "][" << j << "]: "; 
          cout << b[i][j]<<endl;
        }
      }//f4
    }//f3
  }//f2
}
//Output repeats several times because if statements are running several times



/*
Question 1
  Write a program that prompts the user to enter 50 integers and stores them in an array. 
  The program then determines and outputs which numbers in the array are sum of two other 
  array elements. If an array element is the sum of two other array elements, 
  then for this array element, the program should output all such pairs. 
  Use the below code to write the definition of the functions.

Question 2
  Write a program that randomly generates a 20 X 20 two-dimensional array, 
  board, of type int. An element board[i][j] is a peak (either a maximum or a minimum) 
  if all its neighbors (there should be either 3,5, or 8 neighbors for any cell) 
  are less than board[i][j], or greater than board[i][j]. 
  The program should output all elements in board, with their indices, 
  which are peak. It should also output if a peak is a maximum or a minimum. 
  Use the below code to write the definition of the functions.

*/