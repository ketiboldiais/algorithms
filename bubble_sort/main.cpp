#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);

int main() {
	int arr[5] = {3, 1, 5, 4, 2};
	printArray(arr, 5);
	bubbleSort(arr, 5);
	printArray(arr, 5);

	return 0;
}

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
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