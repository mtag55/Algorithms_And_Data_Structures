#include <stdio.h>


void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void insertion_sort(int *a, int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        j = i;
        while(j > 0 && (a[j] < a[j-1])) {
            swap(&a[j], &a[j-1]);
            j--;
        }
    }
}

int main()
{
    int a[10] = {9, 8, 7, 6, 35, 5, 4, 3, 2, 1};
    insertion_sort(a, 10);

    int i = 0;
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}
