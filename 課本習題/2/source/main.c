#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1; 
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key) {
        return mid; 
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key);
    }
    else {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main(void) {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        printf("找到 %d 的索引為: %d\n", key, result);
    }
    else {
        printf("找不到 %d\n", key);
    }

    return 0;
}
