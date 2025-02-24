// Merge Sort

/*
arr[a....b]
stops when a==b
Calculate the position middle element, to divide array into two
Recursively sort [a...k] and [k+1.....b]
Merge both the arrays
*/

#include <iostream>
using namespace std;

void mergeSort(int arr[], int leftEnd, int rightEnd, int temp[]) {
    int mid = leftEnd + (rightEnd - leftEnd) / 2;
    int left = leftEnd, right = mid + 1, k = leftEnd;
    
    while (left <= mid && right <= rightEnd) {
        temp[k++] = (arr[left] <= arr[right]) ? arr[left++] : arr[right++];
    }
    while (left <= mid) temp[k++] = arr[left++];
    while (right <= rightEnd) temp[k++] = arr[right++];
    
    for (int i = leftEnd; i <= rightEnd; i++) {
        arr[i] = temp[i];
    }
}

void merge(int arr[], int leftEnd, int rightEnd, int temp[]) {
    if (leftEnd >= rightEnd) return;
    int mid = leftEnd + (rightEnd - leftEnd) / 2;
    
    merge(arr, leftEnd, mid, temp);
    merge(arr, mid + 1, rightEnd, temp);
    mergeSort(arr, leftEnd, rightEnd, temp);
}

int main() {
    int arr[] = {3, 9, 6, 1};
    int n = 4;
    int temp[n];
    
    merge(arr, 0, n - 1, temp);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}