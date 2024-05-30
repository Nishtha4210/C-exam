#include <stdio.h>
//sum of two 1D array
int sum_array(int arr1[], int arr2[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr1[i] + arr2[i];
    }
    return sum;
}

int main() {
    int array1[] = {5, 2};
    int array2[] = {2, 5};
    int size = sizeof(array1) / sizeof(array1[0]);
    int sum = sum_array(array1, array2, size);
    printf("Sum of array elements is: %d", sum);
    return 0;
}