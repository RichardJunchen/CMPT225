// Simple Insertion Sort and Quicksort implementations
// for sorting Sorts arrays of ints.
template <class T>
void InsertionSort(T A[], int lo, int hi ){
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

// selection sort
template <class T>
void selection (T array[],int size)
{
    for (int i=1;i<size-1;i++)
    {
        int j=i-1;
        int k=i;
        while (k<size)
        {
            if (array[k]<array[j])
                j=k;
            k=k+1;
        }
        int temp=array[i-1];
        array[i-1]=array[j];
        array[j]=temp;
    }
}

//Heap sort
template <class T>
//adjust elements from i to n.
void MaxHeapify(T a[], int i, int n)
{
    int leftIndex, node;
 
    node = a[i];
    leftIndex = 2 * i + 1;
    while (leftIndex < n)
    {
 
        //find a max element in left and right child
        if (leftIndex + 1 < n && a[leftIndex + 1] > a[leftIndex])
            leftIndex++;
        //find a max element in left and right child
        if (a[leftIndex] <= node)
            break;
 
        a[i] = a[leftIndex];
        i = leftIndex;
        leftIndex = 2 * i + 1;
    }
    a[i] = node;
}
 
template <class T>
void BuildMaxHeap(T a[], int n){
    for(int i = n/2 - 1; i >= 0; i--){
        MaxHeapify(a, i ,n);
    }
}
 
template <class T>
void HeapSort(T a[], int n){
    for(int i = n - 1; i >= 1;i--){
        T temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        MaxHeapify(a, 0, i); // rebuild max heap
    }
}
 

template <class T>

void QuickSort_modify(T A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   T temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
       
//       if (lo+23>hi)
//           selection(A, hi-lo);
//       else
//       {
           int pivotIndex =(lo+hi)/2 ;
           temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
           T pivot = A[hi];
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
           QuickSort_modify(A, lo, i-1 );
           QuickSort_modify(A, i+1, hi );
       //}
   }
}


template <class T>
void QuickSort_standard(T A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   T temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
       int pivotIndex =(lo+hi)/2 ;
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;
      // Partition based on the pivot.
      T pivot = A[hi];
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
      QuickSort_standard(A, lo, i-1 );
      QuickSort_standard(A, i+1, hi );
   }
}
