//Counting Vowels and Consonents and number of words in a string
#include<stdio.h>
#include<stdlib.h>
int main() {
    char A[] = "How are   You";
    int i, vcount = 0, ccount = 0, word = 1;

    for (i = 0; A[i] != '\0'; i++) 
	{
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' ||
            A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' ||
            A[i] == 'O' || A[i] == 'U')//Counting Vowels
		{
            vcount++;
        } 
		else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))//Counting consonents 
		{
            ccount++;
        }
    }
	printf("Vowels: %d\n", vcount);
    printf("Consonants: %d\n", ccount);
	for (i = 0; A[i] != '\0'; i++) 
	{
    	if (A[i] == ' ' && A[i - 1] != ' ')//Counting number of words in a string
		{
            word++;
        }
    }
	printf("Number of words in the string: %d\n", word);
	return 0;
}

