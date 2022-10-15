// Simple Insertion Sort and Quicksort implementations
// for sorting Sorts arrays of ints.

void InsertionSort(char A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   for( int i = lo+1 ; i <= hi ; i++ ){
        char pivot = A[i] ;
        int j = i-1 ;
        while( j >= lo && A[j] > pivot ){
           // shift A[j] to the right.
           A[j+1]=A[j];
           j = j-1 ;
        }
        A[j+1]=pivot;
   }
}

void QuickSort(char A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   char temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
      // Choose a pivot.
      // This is an easy, but poor, choice.
       int pivotIndex =rand()%(hi-lo+1)+lo ;
                      //=(lo+hi)/2 ;
       

       
      // swap the pivot into A[hi]
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      char pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++;
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts.
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }
}
