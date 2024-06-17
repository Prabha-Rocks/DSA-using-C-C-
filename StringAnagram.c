/*String Anagram:Anagram are 2 set of strings formed using same set of
alphabets(rearangement),Eg. decimal,medical*/
#include<stdio.h>
#include<string.h>

int main()
{
    char A[] = "medical";
    char B[] = "decimal";
    int i, H[26] = {0};
    
    for(i = 0; A[i] != '\0'; i++)
        H[A[i] - 'a']++;
    
    for(i = 0; B[i] != '\0'; i++)
        H[B[i] - 'a']--;
    
    for(i = 0; i < 26; i++)
    {
        if(H[i] < 0)
        {
            printf("Strings are not anagrams");
            return 0;
        }
    }
    
    printf("Strings are anagrams");
    return 0;
}

