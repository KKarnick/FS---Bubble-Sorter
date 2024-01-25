
#include <iostream>

using namespace std;

int length;
int numSwaps;
int* bSort(int*, int);
void displayArray(int*);

int main() {
	int arr1[10] = { 1, 3, 7, 5, 2, 4, 6, 8, 9, 10 };
	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int arr3[10] = { 1, 10, 2, 9, 3, 8, 4, 7, 5, 6 };

	cout << "\t\tSorted lists: " << endl;
	cout << "\tArray 1:" << endl;
	cout << "Before: " << endl;
	displayArray(arr1);
	cout << "After: " << endl;
	displayArray(bSort(arr1, 10));

	cout << "\tArray 2:" << endl;
	cout << "Before: " << endl;
	displayArray(arr2);
	cout << "After: " << endl;
	displayArray(bSort(arr2, 10));

	cout << "\tArray 3:" << endl;
	cout << "Before: " << endl;
	displayArray(arr3);
	cout << "After: " << endl;
	displayArray(bSort(arr3, 10));
}

int* bSort(int* a, int length) {
	bool swapMade = false;
	numSwaps = 0;
	int temp;

	do {
		swapMade = false;
		for (int i = 0; i < (length - 1); i++) {
			if (a[i] > a[i + 1]) {
				//swap(a[i], a[i + 1]);    THIS WOULD ONLY BE 1 SWAP, BUT NOT ALLOWED
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				swapMade = true;
				numSwaps += 3;
			}
			numSwaps += 1;
		}
	} while (swapMade == true);
	cout << "  (" << numSwaps << " actions performed)" << endl;
	return a;
}
void displayArray(int* a) {
	cout << "{";
	for (int i = 0; i < 9; i++) {
		cout << *(a + i) << ", ";
	}
	cout << a[9] << "}\n" << endl;
}
