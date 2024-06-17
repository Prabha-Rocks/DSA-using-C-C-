#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int len;
};

int Display(struct Array arr)
{
    int i;
    printf("Print Array ele:");
    for (i = 0; i < 10; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->len && j < arr2->len)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    for (; i < arr1->len; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->len; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->len = arr1->len + arr2->len;
    arr3->size = 10;

    return arr3;
}

int main()
{
    struct Array arr1 = { {2, 4, 6, 8, 10}, 10, 5 };
    struct Array arr2 = { {1, 3, 5, 7, 9}, 10, 5 };
    struct Array *arr3;

    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);

    free(arr3); // Don't forget to free the dynamically allocated memory

    return 0;
}

