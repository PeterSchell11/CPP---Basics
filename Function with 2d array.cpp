
#include <iostream>
using namespace std;

void readData(int test[][2],int r,int c){
    
    
    // read data into 2 d array 
   for (int i=0;i<r;i++){  // for rows 
       
       for (int j=0;j<c;j++)  // columns 
       {
           cout<<"enter the value at index "<<i<<" "<<j<<"  ";
           cin>>test[i][j];
       }
   }// for  
    
}// end of function 
/////////////////////////////////////////////////////////////
int findEven(int test3[][2],int r,int c){
    
  int countE=0;   // count the even number 
   
   for (int i=0;i<r;i++){  // for rows 
       
       for (int j=0;j<c;j++)  // columns   
       if (test3[i][j]%2==0)  
              countE++;
       
       
   }// for i 
  return countE ;   
}// function 

///////////////////////////
int SumNumber  (int  test2[][2],int r,int c ){
   
  int s=0;
   for (int i=0;i<r;i++){  // for rows 
      
       for (int j=0;j<c;j++)  // columns   
        //if (test2[i][j]%2==0)
         s=s+test2[i][j];
   }  
        
   return   s ; 
    
}

//////////////////////
int findMax (int  test2[][2],int r,int c ){
 int m=test2[0][0];   
 for (int i=0;i<r;i++){  // for rows 
      
       for (int j=0;j<c;j++)  // columns  
       if (test2[i][j]  >m  )   m=test2[i][j];
    
 }// for 
    
    return    m ;
}




////////////////////
void printData(int  test2[][2],int r,int c ){
    
   for (int i=0;i<r;i++){  // for rows 
       
       for (int j=0;j<c;j++)  // columns 
       cout<<test2[i][j]<<"  ";
   }// for  
    
    
    
}

int main()
{
   int a[2][2];   
   
  readData(a,2,2);
  //printData(a,2,2);r
  int countEven=findEven(a,2,2);
  cout<<"the even number is "<<countEven<<endl;
  int sum= SumNumber(a,2,2);
  cout<<"the sum is "<<sum<<endl;
  
  
  int avgEven=sum/countEven;
  cout <<"the avg "<<avgEven<<endl;
  
  int max=findMax(a,2,2);
  cout<<"the max is "<<max<<endl;
  
  
  
  
  
}

