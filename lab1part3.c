#include <stdio.h>
 #define SIZE 500

 // reads numbers from the standard input into arr,
 // and stores the number of read elements in the memory cell pointed to by nPtr
 void readInput(int arr[], int *nPtr);

 // prints the elements in arr[0..(n-1)]
 void printNumbers(const int arr[], int n);

 // Circularly shift elements of arr from left to right by 1 position where last
 // element of arr is shifted to the first position of arr.
 // Size of arr is n.
 void circularShiftFromLeftToRight(int arr[], int n);

 // Let n be the minimum of n1 and n2 where n1 and n2 are the number of elements in
 // arr1 and arr2, respectively.
 // Compare corresponding elements of arr1 and arr2 at each of the first n positions.
 //
 // If arr1 and arr2 has the same value in each position:
 // Return 0 if n1 == n2
 // Return 1 if n1 > n2
 // Return -1 if n1 < n2
 //
 // If arr1 has a larger value than arr2 considering the first position from the
 // beginning at which arr1 and arr2 have a different value:
 // Return 1
 //
 // If arr1 has a smaller value than arr2 considering the first position from the
 // beginning at which arr1 and arr2 have a different value:
 // Return -1
 int compareTwoArrays(const int arr1[], const int arr2[], int n1, int n2);

 // Circularly shift elements of arr from left to right until sequence of values in
 // arr becomes the largest considering all sequence of values obtained by circularly
 // shifting elements in arr.
 void circularShiftUntilMaxArr(int arr[], int n);


 int main()
 {
     int arr[SIZE];
     int n;
     readInput(arr, &n);
     printNumbers(arr, n);
     circularShiftUntilMaxArr(arr, n);
     printf("\nAfter circularShiftUntilMaxArr:\n");
     printNumbers(arr, n);
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

 void circularShiftFromLeftToRight(int arr[], int n)
 {
     // fill here
	int last  = arr[n-1];
     for (int i = n-1; i>0; i--) {
         arr[i] = arr[i-1];
     }
     arr[0] = last;
 }

 int compareTwoArrays(const int arr1[], const int arr2[], int n1, int n2)
 {
     // fill here
	int n;
	if(n1<n2) n = n1;
	else n = n2;

	for(int i = 0; i<n; i++){
		if(arr1[i] > arr2[i]) return 1;
		if(arr2[i] > arr1[i]) return -1;
	}
	if(n1>n2) return 1;
	if(n1<n2) return -1;
	return 0;
 }

 void circularShiftUntilMaxArr(int arr[], int n)
 {
    //fill here
    int best[500];
    int bestShift = 0;

    for (int i = 0; i < n; i++) best[i] = arr[i];

    for (int i = 1; i < n; i++) {
        circularShiftFromLeftToRight(arr, n);
        int cmp = compareTwoArrays(arr, best, n, n);
        if (cmp > 0 && arr[0] > best[0]) {
            for (int j = 0; j < n; j++) best[j] = arr[j];
            bestShift = i;
        }
    }

    for (int i = 0; i < n; i++) arr[i] = best[i];
 }
