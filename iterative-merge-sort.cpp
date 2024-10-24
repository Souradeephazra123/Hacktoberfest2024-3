// C++ program for the above approach
#include <bits/stdc++.h>
#define it vector<int>::iterator
using namespace std;

// Recursive function to split the array
// into two subarrays and sort them
void mergeSortUtil(it left, it right)
{
	// Handle the base case
	if (right - left <= 1)
		return;

	// Otherwise, find the middle index
	it mid = left + (right - left) / 2;

	// Recursively sort
	// the left subarray
	mergeSortUtil(left, mid);

	// Recursively sort
	// the right subarray
	mergeSortUtil(mid, right);

	// Merge the two sorted arrays using
	// inplace_merge() function
	inplace_merge(left, mid, right);

	return;
}

// Function to sort the array
// using inplace Merge Sort
void mergeSort(vector<int> arr)
{
	// Recursive function to sort the array
	mergeSortUtil(arr.begin(), arr.end());

	// Print the sorted array
	for (int el : arr)
		cout << el << " ";
}

// Driver Code
int main()
{
	vector<int> arr = { 5, 6, 3, 2, 1, 6, 7 };

	mergeSort(arr);

	return 0;
}
