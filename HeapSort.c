#include<stdio.h>

void insert(int A[], int n) {
    int temp, i = n;
    temp = A[i];
    while (i > 1 && temp > A[i / 2]) {
        A[i] = A[i / 2 ];
        i = i / 2;
    }
    A[i] = temp;
}

int Delete(int A[], int n) {
    int i, j, x, temp, val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i = 1;
    j = i * 2;

    while (j <= n - 1) {
        if (j < n - 1 && A[j + 1] > A[j]) {
            j = j + 1;
        }
        if (A[i] < A[j]) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * j;
        } else {
            break;
        }
    }

    // Reinsert the deleted element
    A[n] = x;
    return val;
}

int main() {
    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};
    int n = sizeof(A) / sizeof(A[0]) - 1; // Number of elements excluding the 0th index
    
    printf("Initial array: ");
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
        insert(A, i);
    }
    printf("\nMax heap: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    
    printf("\nDeleted element: %d\n", Delete(A, n));
    
    printf("Heap after deletion: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}

