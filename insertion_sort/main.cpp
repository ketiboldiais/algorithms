#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void insertionSort(int arr[], int n);

int main() {
	int arr[5] = {1, 3, 4, 2, 5};
	printArray(arr, 5);
	insertionSort(arr, 5);
	printArray(arr, 5);
	return 0;
}

void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		 int k = arr[i];
		 int j = i;
		 while(j > 0 && arr[j-1] > k) {
				arr[j] = arr[j-1];
				j--;
		 }
		 arr[j] = k;
	}
}

void printArray(int arr[], int n) {
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "  ";
	}
	cout << "]" << endl;
}