//Quicksort
#include <stdio.h>
#include <limits.h>

int Partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l, j = h, temp;
    
    do {
        do {
            i++;
        } while (A[i] <= pivot);
        
        do {
            j--;
        } while (A[j] > pivot);
            
        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    
    temp = A[l];
    A[l] = A[j];
    A[j] = temp;
    
    return j; // Return index of pivot
}

void Quicksort(int A[], int l, int h) {
    int pivot;
    if (l < h) {
        pivot = Partition(A, l, h);
        Quicksort(A, l, pivot);
        Quicksort(A, pivot + 1, h);
    }
}

int main() {
    int A[] = {67, 34, 0, 9, 1};
    int n = 5, i;

    Quicksort(A, 0, n - 1);

    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

