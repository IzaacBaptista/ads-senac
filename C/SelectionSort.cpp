// C++ program for implementation of selection sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
int temp = *xp; 
*xp = *yp; 
*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
int i, j, min_idx; 

// Um por um, mover limite de subarray não classificado
for (i = 0; i < n-1; i++) 
{ 
// Encontre o elemento mínimo na matriz não classificada 
min_idx = i; 
for (j = i+1; j < n; j++) 
if (arr[j] < arr[min_idx]) 
min_idx = j; 

// Swap the found minimum element with the first element 
swap(&arr[min_idx], &arr[i]); 
} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
int i; 



cout<<"\n";
for (i=0; i < size; i++)

cout << arr[i] << " "; 
cout << endl; 
} 

// Driver program to test above functions 
int main() {
int i;

int arr[] = {1,6,4,3,8,10,2,9,5,7,64, 25, 12, 22, 11}; 
int n = sizeof(arr)/sizeof(arr[0]); 

for (i=0; i < 15; i++){
	cout << arr[i] << " "; 
}
 


selectionSort(arr, n); 
cout << "\n\nAjustado \n"; 
printArray(arr, n); 
return 0; 
} 

// This is code is contributed by rathbhupendra  
