#include <iostream>
#include <cstdlib>
#include <fstream>
#include <chrono>

using namespace std;
using Clock = std::chrono::steady_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

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

	const int n1 = 5000, n2 = 10000, n3 = 15000, n4 = 20000, n5 = 25000,
			  n6 = 30000, n7 = 35000, n8 = 40000, n9 = 45000, n10 = 50000;
	int arr1[n1];
	// creating array 1
	for (int i = 0; i < n1; i++) {
		arr1[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr2[n2];
	// creating array 2
	for (int i = 0; i < n2; i++) {
		arr2[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr3[n3];
	// creating array 2
	for (int i = 0; i < n3; i++) {
		arr3[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr4[n4];
	// creating array 2
	for (int i = 0; i < n4; i++) {
		arr4[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr5[n5];
	// creating array 1
	for (int i = 0; i < n5; i++) {
		arr5[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr6[n6];
	// creating array 2
	for (int i = 0; i < n6; i++) {
		arr6[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr7[n7];
	// creating array 2
	for (int i = 0; i < n7; i++) {
		arr7[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr8[n8];
	// creating array 2
	for (int i = 0; i < n8; i++) {
	}

	int arr9[n9];
		// creating array 2
		for (int i = 0; i < n9; i++) {
			arr9[i] = (rand() % (10000 - 0 + 1)) + 0;
		}

		int arr10[n10];
		// creating array 2
		for (int i = 0; i < n10; i++) {
		}

	time_point<Clock> start = Clock::now();	// merge sorting
	mergeSort(arr1, 0, n1 - 1);
	time_point<Clock> end = Clock::now();
	milliseconds diff = duration_cast<milliseconds>(end - start);

	time_point<Clock> start2 = Clock::now();	// merge sorting
	mergeSort(arr2, 0, n2 - 1);
	time_point<Clock> end2 = Clock::now();
	milliseconds diff2 = duration_cast<milliseconds>(end2 - start2);

	time_point<Clock> start3 = Clock::now();	// merge sorting
	mergeSort(arr3, 0, n3 - 1);
	time_point<Clock> end3 = Clock::now();
	milliseconds diff3 = duration_cast<milliseconds>(end3 - start3);

	time_point<Clock> start4 = Clock::now();	// merge sorting
	mergeSort(arr4, 0, n4 - 1);
	time_point<Clock> end4 = Clock::now();
	milliseconds diff4 = duration_cast<milliseconds>(end4 - start4);

	time_point<Clock> start5 = Clock::now();	// merge sorting
	mergeSort(arr5, 0, n5 - 1);
	time_point<Clock> end5 = Clock::now();
	milliseconds diff5 = duration_cast<milliseconds>(end5 - start5);

	time_point<Clock> start6 = Clock::now();	// merge sorting
	mergeSort(arr6, 0, n6 - 1);
	time_point<Clock> end6 = Clock::now();
	milliseconds diff6 = duration_cast<milliseconds>(end6 - start6);

	time_point<Clock> start7 = Clock::now();	// merge sorting
	mergeSort(arr7, 0, n7 - 1);
	time_point<Clock> end7 = Clock::now();
	milliseconds diff7 = duration_cast<milliseconds>(end7 - start7);

	time_point<Clock> start8 = Clock::now();	// merge sorting
	mergeSort(arr8, 0, n8 - 1);
	time_point<Clock> end8 = Clock::now();
	milliseconds diff8 = duration_cast<milliseconds>(end8 - start8);

	time_point<Clock> start9 = Clock::now();	// merge sorting
	mergeSort(arr9, 0, n9 - 1);
	time_point<Clock> end9 = Clock::now();
	milliseconds diff9 = duration_cast<milliseconds>(end9 - start9);

	time_point<Clock> start10 = Clock::now();	// merge sorting
	mergeSort(arr10, 0, n10 - 1);
	time_point<Clock> end10 = Clock::now();
	milliseconds diff10 = duration_cast<milliseconds>(end10 - start10);

	cout << "merge sort lengths and times \n" << endl;
	cout << "n       " << " | " << "time" << endl;
	cout << "----------" << "----------" << endl;
	cout << n1 << "    | " << diff.count() << "ms" << endl;
	cout << n2 << "    | " << diff2.count() << "ms" << endl;
	cout << n3 << "    | " << diff3.count() << "ms" << endl;
	cout << n4 << "    | " << diff4.count() << "ms" << endl;
	cout << n5 << "    | " << diff5.count() << "ms" << endl;
	cout << n6 << "    | " << diff6.count() << "ms" << endl;
	cout << n7 << "    | " << diff7.count() << "ms" << endl;
	cout << n8 << "    | " << diff8.count() << "ms" << endl;
	cout << n9 << "    | " << diff9.count() << "ms" << endl;
	cout << n10 << "    | " << diff10.count() << "ms" << endl;

	return 0;
}
