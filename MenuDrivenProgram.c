//menu driven Program
#include <stdio.h>
#include <stdlib.h>
struct Array//structure creation
{
    int *A;
    int size;
    int len;
};

void Display(struct Array arr)//Display Function
{
    int i;
    printf("Print Array ele:");
    for (i = 0; i < arr.len; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void Insert(struct Array *arr, int index, int x)//Insert Function
{
    int i;
    if (index >= 0 && index <= arr->len)
    {
        for (i = arr->len; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->len++;
    }
}

int Delete(struct Array *arr, int index)//Delete Function
{
    int x, i;
    if (index >= 0 && index < arr->len)
    {
        x = arr->A[index];
        for (i = index; i < arr->len - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->len--;
        return x;
    }
    return -1;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LSearch(struct Array *arr, int x)//Linear Search Function
{
    int i;
    for (i = 0; i < arr->len; i++)
    {
        if (x == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int Sum(struct Array arr)//Array Sum Function
{
    int sum = 0, i;
    for (i = 0; i < arr.len; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}

int main()
{
    struct Array arr;
    int ch, x, index;

    printf("Enter array size: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.len = 0;

    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    printf("Enter Choice: ");
    scanf("%d", &ch);

    do
    {
        switch (ch)
        {
            case 1:
                printf("Enter element and index: ");
                scanf("%d %d", &x, &index);
                Insert(&arr, index, x);
                             break;

            case 2:
                printf("Enter index: ");
                scanf("%d", &index);
                x = Delete(&arr, index);
                printf("Deleted element is: %d\n", x);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &x);
                index = LSearch(&arr, x);
                printf("Element index is: %d\n", index);
                break;

            case 4:
                printf("Sum: %d\n", Sum(arr));
                break;

            case 5:
                Display(arr);
                break;
        }

        printf("Enter Choice: ");
        scanf("%d", &ch);

    } while (ch < 6);

    free(arr.A); // Free dynamically allocated memory

    return 0;
}
  

