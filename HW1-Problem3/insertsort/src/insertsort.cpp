#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

/* Insertion sort function*/
void insertionSort(int arr[], int n) {

	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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

		// sorting
		insertionSort(arr, n);

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	inputData.close();

	return 0;
}
