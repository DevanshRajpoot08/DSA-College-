#include <stdio.h>

void selectionSort(int arr[], int n) {
    //write your code here...
    
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        // Find the maximum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap the found maximum element with the first element
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
	}
    
    
}

int main() {
    int n;

    // Input number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
