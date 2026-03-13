#include <stdio.h>
#define SIZE 500

 // reads numbers from the standard input into arr,
 // and stores the number of read elements in the memory cell pointed to by nPtr
 void readInput(int arr[], int *nPtr);

 // prints the elements in arr[0..(n-1)]
 void printNumbers(const int arr[], int n);

 // Circularly shift elements of arr from right to left by 1 position where last
 // element of arr is shifted to the first position of arr.
 // Size of arr is n.
 void circularShiftFromRightToLeft(int arr[], int n);


 int main()
 {
     int arr[SIZE];
     int n;
     readInput(arr, &n);
     printNumbers(arr, n);
     circularShiftFromRightToLeft(arr, n);
     printf("\nAfter one circular shift from right to left:\n");
     printNumbers(arr, n);
     return 0;
 }

 void readInput(int arr[], int *nPtr)
 {
     // fill here
     printf("Enter the number of elements:");
     scanf("%d", nPtr);
     printf("Enter %d elements: \n", *nPtr);
     for (int i = 0; i<*nPtr; i++) {
         scanf("%d" , &arr[i]);
     }
 }

 void printNumbers(const int arr[], int n)
 {
     // fill here
     printf("Array elements: ");
     for (int i = 0; i<n; i++) {
         printf("%d ", arr[i]);
     }
     printf(("\n"));
 }

 void circularShiftFromRightToLeft(int arr[], int n)
 {
     int last  = arr[n-1];
     for (int i = n-1; i>0; i--) {
         arr[i] = arr[i-1];
     }
     arr[0] = last;

 }
