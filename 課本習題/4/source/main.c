#include <stdio.h>

int recursiveMaximum(const int array[], int size) {
    // 終止條件：當數組只剩一個元素時，該元素就是最大值
    if (size == 1) {
        return array[0];
    }

    // 遞迴計算子數組的最大值
    int maxOfRest = recursiveMaximum(array, size - 1);

    // 返回當前元素與子數組最大值之間的較大值
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main(void) {
    int array[] = { 3, 5, 7, 2, 8, 1, 9, 4 };
    int size = sizeof(array) / sizeof(array[0]);

    int max = recursiveMaximum(array, size);

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
