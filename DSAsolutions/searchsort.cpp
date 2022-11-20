// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) 
    {
		int m = l + (r - l) / 2;

		if (arr[m] > x) r = m - 1;

		else if (arr[m] < x) l = m + 1;

		else return m;
	}
	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 40;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	cout<<result;
	return 0;
}
