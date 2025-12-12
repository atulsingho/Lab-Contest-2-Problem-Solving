#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 4, sizeof(int), compare);

    int val1 = arr[3] - arr[0];
    int val2 = arr[3] - arr[1];
    int val3 = arr[3] - arr[2];

    printf("%d %d %d\n", val1, val2, val3);

    return 0;
}
