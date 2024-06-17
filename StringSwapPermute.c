//Permutations of a String
#include<stdio.h>

void swap(char* a, char* b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void perm(char S[], int l, int h)
 {
    if (l == h) 
	{
        printf("%s\n", S);
    } 
	else
	{
		int i;
    	
        for ( i = l; i <= h; i++)
		{
            swap(&S[l], &S[i]);
            perm(S, l + 1, h);
            swap(&S[l], &S[i]);
        }
    }
}

int main() {
    char S[] = "ABC";
    int n = sizeof(S) / sizeof(S[0]) - 1;  // Calculate the length of the string

    perm(S, 0, n - 1);
    
    return 0;
}

