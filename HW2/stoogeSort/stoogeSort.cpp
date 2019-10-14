#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <array>
#include <string>

using namespace std;

void stoogeSort(int arr[], int l, int r) {
	if (l >= r)
		return;

	// If value at leftmost pos of arr > rightmost pos of arr, then swap values
	if (arr[l] > arr[r])
		swap(arr[l], arr[r]);

	// If there are more than 2 elements in arr
	if ((r - l + 1) > 2) {
		int twoThrds = (r - l + 1) / 3;

		// stoogeSort first 2/3 elements
		stoogeSort(arr, l, r - twoThrds);

		// stoogeSort last 2/3 elements
		stoogeSort(arr, l + twoThrds, r);

		// stoogeSort first 2/3 elements again
		stoogeSort(arr, l, r - twoThrds);
	}
}

// Driver Code
int main() {
	ifstream inputData("data.txt");

	if (inputData.fail()) {
		cout << "Error: could not open file" << endl;
		return 0;
	}

	int n;

	ofstream myfile("stooge.txt");
	// creating array
	while (inputData >> n) {
		int *arr = new int[n];
		int j = 0;
		while (j < n) {
			inputData >> arr[j];
			j++;
		}

		// sorting
		stoogeSort(arr, 0, j-1);

		for (int i = 0; i < n; i++)
			myfile << arr[i] << " ";
		myfile << endl;
	}

	myfile.close();
	inputData.close();

	return 0;
}
