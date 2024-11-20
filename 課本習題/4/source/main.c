#include <stdio.h>

int recursiveMaximum(const int array[], int size) {
    // �פ����G��Ʋեu�Ѥ@�Ӥ����ɡA�Ӥ����N�O�̤j��
    if (size == 1) {
        return array[0];
    }

    // ���j�p��l�Ʋժ��̤j��
    int maxOfRest = recursiveMaximum(array, size - 1);

    // ��^��e�����P�l�Ʋճ̤j�Ȥ��������j��
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main(void) {
    int array[] = { 3, 5, 7, 2, 8, 1, 9, 4 };
    int size = sizeof(array) / sizeof(array[0]);

    int max = recursiveMaximum(array, size);

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
