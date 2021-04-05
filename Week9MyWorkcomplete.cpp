#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;


void fillArr(int randArray[],int sz);
void showArr(int randArray[],int sz);
void copyArr(int randArray[],int origArray[],int sz);

void showMenu();

void selectionSort(int a[] , int size);
void insertionSort(int numbers[], int numbersSize);
void bubbleSort (int numbers[], int size);
void merge(int arr[], int l, int m, int r);
void mergeSort (int arr[], int l, int r);
void quickSort (int arr[], int left, int right);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

int main(){
  //clock
  clock_t time_req;

  int sz=10000;//*****Change to 10000 --when you change, change showArr function for loop condition to 50
  int printEl =50;//for check to see if sorting is workng //*****change to 50
  int randArr[sz];
  int origArr[sz];

  //// output for unsorted array
  //showArr(randArr,sz);
  //fillArr(randArr,sz) ;
  
  //showArr(origArr,sz);

  int option;
  const int SELECTION_OPT = 1,
            INSERTION_OPT = 2,
            BUBBLE_OPT = 3,
            MERGE_OPT = 4,
            QUICK_OPT = 5,
            HEAP_OPT = 6,
            QUIT_OPT = 7;
            

  do{
    showMenu(); // Display Menu
    cin >> option;cout<<endl;
    
    // check valid menu choice
    while (option < SELECTION_OPT || option > QUIT_OPT){
      cout << "Please enter a valid menu choice: ";
      cin >> option; cout << endl;
    }
    
    //Generate and assign number between 0 to 99 to fill array
    fillArr(randArr,sz) ;
    //save a copy of the original array
    copyArr(randArr,origArr,sz);
    //cout << randArr<<endl<<origArr<<endl;

    if ( option != QUIT_OPT)
      switch(option){
        case SELECTION_OPT:
          time_req = clock();
          selectionSort(randArr , sz);
          cout<<"Selection Sort:\n";
          time_req = clock() - time_req;
          cout << "Using Selection Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);
           //showArr(origArr, printEl);//check for original 
          
          break;

        case INSERTION_OPT:
          time_req = clock();
          insertionSort(randArr, sz);
          cout<<"Insertion Sort:\n";
          time_req = clock() - time_req;
          cout << "Using Insertion Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);        
          break;

        case BUBBLE_OPT:
          time_req = clock();
          bubbleSort (randArr, sz);
          cout<<"Bubble Sort:\n";
          time_req = clock() - time_req;
          cout << "Using Bubble Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);
          break;

        case MERGE_OPT:
          time_req = clock();
          mergeSort (randArr, 0, sz-1);
          cout<<"Merge Sort:\n";
          cout << "Using Merge Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);
          break;

        case QUICK_OPT:
          time_req = clock();
          quickSort (randArr, 0, sz-1);
          cout<<"Quick Sort:\n";
          cout << "Using Quick Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);
          break;

        case HEAP_OPT:
          time_req = clock();
          heapSort (randArr, sz);
          cout<<"Heap Sort:\n";
          cout << "Using Heap Sort took " << (float)time_req/CLOCKS_PER_SEC << " seconds\n";
          showArr(randArr, printEl);
          break;
      }

}while (option != QUIT_OPT);//end do
      return 0;

} //end main

void fillArr(int randArr[],int sz){
    for(int i=0;i<sz;i++) 
      randArr[i] = rand()%10000;   
}

void showArr(int randArr[],int sz){
    for (int i=0; i < sz; i++) 
        cout << randArr[i] << ",";
    cout<< endl << endl; 
}

void copyArr(int randArray[],int origArray[],int sz){
  for (int i=0; i < sz; i++)
    origArray[i]=randArray[i];
}

void showMenu(){
  cout << "Please choose a Sorting Method : " << endl 
    << "1. Selection Sort\n" 
    << "2. Insertion Sort\n" 
    << "3. Bubble Sort\n" 
    << "4. Merge Sort\n"
    << "5. Quick Sort\n"
    << "6. Heap Sort\n"
    << "7. Quit\n\n";
}

void selectionSort(int a[] , int size) {
  int outer, inner, min;
  for (outer = 0; outer < size - 1; outer++) {
    min = outer;
      for (inner = outer + 1; inner < size ; inner++) {
        if (a[inner] < a[min]) { min = inner;} 
      }
  int temp = a[outer]; a[outer] = a[min]; a[min] = temp;
} }

void insertionSort(int numbers[], int size) {
   int i = 0;
   int j = 0;
   int temp = 0;  // Temporary variable for swap
   
   for (i = 1; i < size; ++i) {
      j = i;
      // Insert numbers[i] into sorted part
      // stopping once numbers[i] in correct position
      while (j > 0 && numbers[j] < numbers[j - 1]) {
         
         // Swap numbers[j] and numbers[j - 1]
         temp = numbers[j];
         numbers[j] = numbers[j - 1];
         numbers[j - 1] = temp;
         --j;
      }
   }
}

void bubbleSort (int numbers[], int size) {
   for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
         if (numbers[j] > numbers[j+1]) {
            int temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
         }
      }
   }
}

void merge(int arr[], int l, int m, int r) { 
  int i, j, k; 
  int n1 = m - l + 1; 
  int n2 =  r - m; 
  
  int L[n1], R[n2]; 
  
  for (i = 0; i < n1; i++) 
    L[i] = arr[l + i]; 
  for (j = 0; j < n2; j++) 
    R[j] = arr[m + 1+ j]; 
  
  i = 0; 
  j = 0; 
  k = l; 
  while (i < n1 && j < n2) { 
    if (L[i] <= R[j]) { 
      arr[k] = L[i]; 
      i++; 
        } 
    else{ 
      arr[k] = R[j]; 
        j++; 
        } 
      k++; 
    } 
  
  while (i < n1){ 
    arr[k] = L[i]; 
    i++; 
    k++; 
    } 
  
  while (j < n2){ 
    arr[k] = R[j]; 
      j++; 
      k++; 
    } 
} 
  
void mergeSort (int arr[], int l, int r) {
  if (l < r) { 
    
    int m = l+(r-l)/2; 
  
    mergeSort(arr, l, m); 
    mergeSort(arr, m+1, r); 
  
    merge(arr, l, m, r); 
    } 
}

void quickSort (int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
            }
  };
 
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

void heapify(int arr[], int n, int i){
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
 
