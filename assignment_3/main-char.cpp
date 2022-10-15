#include <iostream> // I/O library.
#include <algorithm> // Includes sort()
#include <ctime> // access to the system clock
#include <time.h> // access to "wall clock"
#include "Qsort-char.h" // our quicksort (and insertion sort)
using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

void printArray( char s[], char A[], int lo, int hi ){
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

   int SIZE = 10000; // size of array to sort.
   int TIMES = 10 ; // number of times to run - mean is reported.

   srand( time(NULL) ); // seed the random number generator.

   clock_t start, finish ;// used to time function calls.

   double sort_time = 0;
   double quicksort_time = 0 ;
   double insertion_sort_time = 0 ;

   char *A1 = new char[SIZE];
   char *A2 = new char[SIZE];
   char *A3 = new char[SIZE];

   for( int t = 0 ; t < TIMES ; t++ ){

      for(int i = 0 ; i < SIZE ; i++ ){
         int x = SIZE - i ; // reverse-ordered
         //int x = rand() % SIZE*10; //random
         A1[i] = x ;
         A2[i] = x ;
         A3[i] = x ;
      }

      start = clock();
      sort(A1,A1+SIZE);
      finish = clock();
      sort_time += elapsed_time(start,finish);

      start = clock();
      QuickSort(A2,0,SIZE-1);
      finish = clock();
      quicksort_time += elapsed_time(start,finish);

      start = clock();
      InsertionSort(A3,0,SIZE-1);
      finish = clock();
      insertion_sort_time += elapsed_time(start,finish);

   }

   cout << "C++ sort: " << sort_time / TIMES << endl ;
   cout << "Quicksort: " << quicksort_time / TIMES << endl ;
   cout << "Insertion Sort: " << insertion_sort_time / TIMES << endl ;

   return 0;
}
