//Finding Duplicates in a String using Hash Table
#include<stdio.h>

int main()
{
    char A[] = "Cookie is Cute";
    int i, H[26] = {0};

    for(i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 'a']++;
    }

    for(i = 0; i < 26; i++)
    {
        if(H[i] > 1)
        {
            printf("Repeating char: %c\n", i + 'a');
            printf("No. of times repeating: %d\n", H[i]);
        }
        else if(i==26)
    	{
        	printf("No Duplicates in String");
    	}
    }
return 0;
}

