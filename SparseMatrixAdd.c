// Addition of sparse matrices
// Sparse Matrix Representation code
#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int i, j, x;
};

struct SMatrix
{
    int m, n;
    int num; // No. of nonzero elements
    struct Element *e; // Dynamic array of elements created
};

void create(struct SMatrix *s)
{
    int i;
    printf("Enter Dimension:");
    scanf("%d %d", &s->m, &s->n);
    printf("Enter no. of Non-Zero Elements:");
    scanf("%d", &s->num);
    s->e = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter all non-zero elements:\n");
    for (i = 0; i < s->num; i++)
        scanf("%d %d %d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
}

void display(struct SMatrix s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
            {
                printf("%d ", s.e[k].x);
                k++;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

struct SMatrix *add(struct SMatrix *s1, struct SMatrix *s2)
{
    struct SMatrix *sum;
    int i, j, k;
    i = j = k = 0;
    sum = (struct SMatrix *)malloc(sizeof(struct SMatrix)); // dynamic array for struct sum
    sum->e = (struct Element *)malloc((s1->num + s2->num) * sizeof(struct Element)); // Array to store all nonzero elements

    while (i < s1->num && j < s2->num)
    {
        if (s1->e[i].i < s2->e[j].i) // check for rows
            sum->e[k++] = s1->e[i++];
        else if (s1->e[i].i > s2->e[j].i)
            sum->e[k++] = s2->e[j++];
        else
        {
            if (s1->e[i].j < s2->e[j].j) // check for columns
                sum->e[k++] = s1->e[i++];
            else if (s1->e[i].j > s2->e[j].j)
                sum->e[k++] = s2->e[j++];
            else
            {
                sum->e[k] = s1->e[i];
                sum->e[k++].x += s2->e[j++].x;
            }
        }
    }

    // to copy residual elements from i and j
    for (; i < s1->num; i++)
        sum->e[k++] = s1->e[i];
    for (; j < s2->num; j++)
        sum->e[k++] = s2->e[j];

    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = k;
    return sum;
}

int main()
{
    struct SMatrix s1, s2, *s3;
    create(&s1);
    create(&s2);
    s3 = add(&s1, &s2);
    printf("First Matrix:\n");
    display(s1);
    printf("Second Matrix:\n");
    display(s2);
    printf("Sum Matrix:\n");
    display(*s3);

    // Free the memory allocated for dynamic arrays
    free(s1.e);
    free(s2.e);
    free(s3->e);
    free(s3);

    return 0;
}

