#include <iostream> // I/O library.
#include <algorithm> // Includes sort()
#include <ctime> // access to the system clock
#include <time.h> // access to "wall clock"
#include "modify-sort.h" // our quicksort (and insertion sort)
using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

void printArray( char s[], int A[], int lo, int hi ){
  // call like this: printArray( "A1", A1, 0, SIZE-1 );
  // useful for debugging
  cout << s << " [ " ;
  for( int i = lo ; i < hi ; i++ ){
    cout << A[i] << ", " ;
  }
  cout << A[hi] << " ]" ;
  cout << endl;
}

int main (int argc, char * const argv[]) {

   int SIZE=100; // size of array to sort.
   int TIMES = 10 ; // number of times to run - mean is reported.

   srand( time(NULL) ); // seed the random number generator.

   clock_t start, finish ;// used to time function calls.

   double sort_time = 0;
   double quicksort_standard_time = 0 ;
   double quicksort_modify_time=0;
   double simple_time=0;
   double insert_time=0;

   int *A1 = new int[SIZE];
   int *A2 = new int[SIZE];
   int *A3 = new int[SIZE];
   int *A4 = new int[SIZE];
   int *A5 = new int[SIZE];

   for( int t = 0 ; t < TIMES ; t++ ){

      for(int i = 0 ; i < SIZE ; i++ ){
         int x = rand() % SIZE*10; //random
         //int x = SIZE-i;
         A1[i] = x ;
         A2[i] = x ;
         A3[i] = x ;
         A4[i] = x;
         A5[i] = x;
      }

      start = clock();
      sort(A1,A1+SIZE);
      finish = clock();
      sort_time += elapsed_time(start,finish);
      
      start = clock();
      selection(A4,SIZE-1);
      finish = clock();
      simple_time += elapsed_time(start,finish);

      start = clock();
      InsertionSort(A5,0,SIZE-1);
      finish = clock();
      insert_time += elapsed_time(start,finish);
       
      start = clock();
      QuickSort_standard(A2,0,SIZE-1);
      finish = clock();
      quicksort_standard_time += elapsed_time(start,finish);
       
      start = clock();
      QuickSort_modify(A3, 0, SIZE-1);
      finish = clock();
      quicksort_modify_time += elapsed_time(start,finish);


   }

   cout << "C++ sort: " << sort_time / TIMES << endl ;
   cout << "Simple sort : " << simple_time / TIMES << endl ;
   cout << "Insert sort : "<<insert_time / TIMES <<endl;
   cout << "Standard quick sort : " << quicksort_standard_time / TIMES << endl ;
   cout << "Modify quick sort : " << quicksort_modify_time / TIMES << endl ;
   


   return 0;
}
