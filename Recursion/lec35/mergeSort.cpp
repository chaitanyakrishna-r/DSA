#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to merge two halves and count inversions
void merge(int *arr, int s, int e, int &inversionCount) {
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values into the temporary arrays
    int mainIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainIndex++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainIndex++] = first[index1++];
        } else {
            arr[mainIndex++] = second[index2++];
            // Count inversions
            inversionCount += (len1 - index1);
        }
    }

    while (index1 < len1) {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainIndex++] = second[index2++];
    }

    // Delete temporary arrays to prevent memory leakage
    delete[] first;
    delete[] second;
}

// Recursive function to perform merge sort and count inversions
void mergeSort(int *arr, int s, int e, int &inversionCount) {
    // Base case
    if (s >= e) {
        return;
    }

    int mid = s + (e - s) / 2;

    // Sort left half
    mergeSort(arr, s, mid, inversionCount);

    // Sort right half
    mergeSort(arr, mid + 1, e, inversionCount);

    // Merge both halves and count inversions
    merge(arr, s, e, inversionCount);
}

int main() {
    int arr[5] = {5, 3, 2, 1, 4};
    int n = 5;

    int inversionCount = 0;

    mergeSort(arr, 0, n - 1, inversionCount);

    cout << "Sorted array: ";
    printArr(arr, n);

    cout << "Number of inversions: " << inversionCount << endl;

    return 0;
}
