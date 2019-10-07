#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
using Clock = std::chrono::steady_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

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

	const int n1 = 5000, n2 = 10000, n3 = 15000, n4 = 20000, n5 = 25000, n6 =
			30000, n7 = 35000, n8 = 40000, n9 = 45000, n10 = 50000;
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
		arr8[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr9[n9];
	// creating array 2
	for (int i = 0; i < n9; i++) {
		arr9[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	int arr10[n10];
	// creating array 2
	for (int i = 0; i < n10; i++) {
		arr10[i] = (rand() % (10000 - 0 + 1)) + 0;
	}

	time_point<Clock> start = Clock::now();	// merge sorting
	insertionSort(arr1, n1);
	time_point<Clock> end = Clock::now();
	milliseconds diff = duration_cast<milliseconds>(end - start);

	time_point<Clock> start2 = Clock::now();	// merge sorting
	insertionSort(arr2, n2);
	time_point<Clock> end2 = Clock::now();
	milliseconds diff2 = duration_cast<milliseconds>(end2 - start2);

	time_point<Clock> start3 = Clock::now();	// merge sorting
	insertionSort(arr3, n3);
	time_point<Clock> end3 = Clock::now();
	milliseconds diff3 = duration_cast<milliseconds>(end3 - start3);

	time_point<Clock> start4 = Clock::now();	// merge sorting
	insertionSort(arr4, n4);
	time_point<Clock> end4 = Clock::now();
	milliseconds diff4 = duration_cast<milliseconds>(end4 - start4);

	time_point<Clock> start5 = Clock::now();	// merge sorting
	insertionSort(arr5, n5);
	time_point<Clock> end5 = Clock::now();
	milliseconds diff5 = duration_cast<milliseconds>(end5 - start5);

	time_point<Clock> start6 = Clock::now();	// merge sorting
	insertionSort(arr6, n6);
	time_point<Clock> end6 = Clock::now();
	milliseconds diff6 = duration_cast<milliseconds>(end6 - start6);

	time_point<Clock> start7 = Clock::now();	// merge sorting
	insertionSort(arr7, n7);
	time_point<Clock> end7 = Clock::now();
	milliseconds diff7 = duration_cast<milliseconds>(end7 - start7);

	time_point<Clock> start8 = Clock::now();	// merge sorting
	insertionSort(arr8, n8);
	time_point<Clock> end8 = Clock::now();
	milliseconds diff8 = duration_cast<milliseconds>(end8 - start8);

	time_point<Clock> start9 = Clock::now();	// merge sorting
	insertionSort(arr9, n9);
	time_point<Clock> end9 = Clock::now();
	milliseconds diff9 = duration_cast<milliseconds>(end9 - start9);

	time_point<Clock> start10 = Clock::now();	// merge sorting
	insertionSort(arr10, n10);
	time_point<Clock> end10 = Clock::now();
	milliseconds diff10 = duration_cast<milliseconds>(end10 - start10);

	cout << "insertion sort lengths and times \n" << endl;
	cout << "n , " << "time" << endl;
	cout << "---------------" << endl;
	cout << n1 << ", " << diff.count() << "ms" << endl;
	cout << n2 << ", " << diff2.count() << "ms" << endl;
	cout << n3 << ", " << diff3.count() << "ms" << endl;
	cout << n4 << ", " << diff4.count() << "ms" << endl;
	cout << n5 << ", " << diff5.count() << "ms" << endl;
	cout << n6 << ", " << diff6.count() << "ms" << endl;
	cout << n7 << ", " << diff7.count() << "ms" << endl;
	cout << n8 << ", " << diff8.count() << "ms" << endl;
	cout << n9 << ", " << diff9.count() << "ms" << endl;
	cout << n10 << ", " << diff10.count() << "ms" << endl;

}

