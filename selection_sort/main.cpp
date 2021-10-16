#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void selectionSort(int arr[], int arrLength);

int main() {
	int s = 4;
	int arr[4] = {3, 2, 1, 4};
	printArray(arr, s);

	selectionSort(arr, s);
	printArray(arr, s);

	return 0;
}

void selectionSort(int arr[], int arrLength) {
	for (int i = 0; i < arrLength - 1; i++) {
		int smallest = arr[i];
		int indexOf_smallest = i;
		for (int j = i+1; j < arrLength; j++) {
			if (arr[j] < smallest) {
				smallest = arr[j];
				indexOf_smallest = j;
			}

		}
		if (indexOf_smallest != i) {
			int temp = arr[indexOf_smallest];
			arr[indexOf_smallest] = arr[i];
			arr[i] = temp;
		}
	}
}

void printArray(int arr[], int n) {
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "  ";
	}
	cout << "]" << endl;
}