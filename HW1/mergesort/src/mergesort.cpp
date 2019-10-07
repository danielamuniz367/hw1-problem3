#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

// Merges two (split) sorted arrays of arr[].
// First array is arr[l...m]
// Second array is arr[m+1...r]
void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int arr1 = m - l + 1;
	int arr2 = r - m;

	// temp left and right arrays
	int L[arr1], R[arr2];

	// Copy data to L[] and R[]
	for (i = 0; i < arr1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < arr2; j++)
		R[j] = arr[m + 1 + j];

	// Merge temp arrays back into arr[l...r]
	i = 0; // Initial index of first array
	j = 0; // Initial index of second array
	k = l; // Initial index of merged array

	while (i < arr1 && j < arr2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy remaining elements of L[], if any
	while (i < arr1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if any
	while (j < arr2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// l is for left index and r is right index of the sub array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

int main() {
	ifstream inputData("data.txt");

	if (inputData.fail()) {
		cout << "Error: could not open file" << endl;
		return 0;
	}

	int n;

	// creating array
	while (inputData >> n) {
		int *arr = new int[n];
		int j = 0;
		while (j < n) {
			inputData >> arr[j];
			j++;
		}

		// merge sorting
		mergeSort(arr, 0, j - 1);

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}
