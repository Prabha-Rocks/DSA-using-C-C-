//Merge Sort
#include<stdio.h>

void Merge(int A[], int l, int h, int mid) {
    int i = l, j = mid + 1, k = 0;
    int B[20];
    
    while (i <= mid && j <= h) {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    
    for (; i <= mid; i++)
        B[k++] = A[i];
    
    for (; j <= h; j++)
        B[k++] = A[j];
    
    // Copy elements from B back to A
    for (i = l, k = 0; i <= h; i++, k++)
        A[i] = B[k];
}

void MergeSort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, h, mid);
    }
}

int main() {
    int A[] = {67, 1, 0, 45, 31}, n = 5, i;
    MergeSort(A, 0, n - 1);
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}

