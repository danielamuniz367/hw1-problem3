// io/read-file-sum.cpp - Read integers from file and print sum.
// Fred Swartz 2003-08-20

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    int sum = 0;
    int x;
    ifstream inFile;

    inFile.open("file.txt");
    if (!inFile) {
        cout << "Unable to open file";
    }

    while (inFile >> x) {
        sum = sum + x;
    }

    inFile.close();
    cout << "Sum = " << sum << endl;
    return 0;
}
