// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Giving pivot element its correct position
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Sorting left and right parts of the pivot element
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	// base case
	if (start >= end)
		return;

	// partitioning the array
	int p = partition(arr, start, end);

	// Sorting the left part
	quickSort(arr, start, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
}

int small(int n,int x[])
{
	int smallest;
	if ( n > 0 )
	{
        smallest = x[0]; 
        for ( int i = 1; i < n; i++ )
		{
            if ( smallest > x[i] )
			{
                smallest = x[i];
            }
        }
	}
	return smallest;

}

int main()
{

	int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
	int m = 5; 
	int n = sizeof(arr)/sizeof(arr[0]);

	quickSort(arr, 0, n-1);
	int div = n - (m-1);
	int min[div];

	for(int i=0 ; i<div ; i++)
	{
		min[i] = arr[m-1] - arr[i];
		m++;
	}  

	int sm;
	int p = sizeof(min)/sizeof(min[0]);
	sm = small(p-1,min);
	cout<<"minimum difference is"<<sm;
	return 0;
}
