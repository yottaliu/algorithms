#include "insertion_sort.h"

int insertion_sort(ElementType *arr, int n)
{
    int i, j;
    ElementType tmp;
    for (i = 1; i < n; ++i) {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; --j) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = tmp;
    }
    return 1;
}