#include <stdio.h>
 #define SIZE 500

 // reads numbers from the standard input into arr,
 // and stores the number of read elements in the memory cell pointed to by nPtr
 void readInput(int arr[], int *nPtr);

 // prints the elements in arr[0..(n-1)]
 void printNumbers(const int arr[], int n);

 // Finds and returns the minimum value in the given array.
 int findMin(const int arr[], int n);

 // Finds and returns the maximum value in the given array.
 int findMax(const int arr[], int n);

 int main()
 {
     int arr[SIZE];
     int n;

     readInput(arr, &n);
     printNumbers(arr, n);

     int min = findMin(arr, n);
     int max = findMax(arr, n);

     printf("\nMinimum value: %d\n", min);
     printf("Maximum value: %d\n", max);

     return 0;
 }

 void readInput(int arr[], int *nPtr)
 {
     // fill here

	printf("Enter the number of elements:");
	printf("\n");
	scanf("%d", nPtr);
	printf("Enter %d elements: ", *nPtr);
	printf("\n");
	for(int i = 0; i<*nPtr; i++){
		scanf("%d", &arr[i]);
	}
	//printf("\n");

 }

 void printNumbers(const int arr[], int n)
 {
     // fill here
    printf("Array elements: ");
	for(int i = 0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
 }

 int findMin(const int arr[], int n)
 {
	int min = arr[0];
	for(int i = 1; i<n; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
 }

 int findMax(const int arr[], int n)
 {
     // fill here
	int max = arr[0];
	for(int i = 1; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
 }

