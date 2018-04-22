//program that shows if a 2nd string exist inside the first string.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char* str1 = get_string("Enter a string1: ");

    char* str2 = get_string("Enter string2: ");

    char* result = strstr(str1, str2);

    if (result)
    {
        printf("The string exists\n");
        return 1;
    }
    else
    {
        printf("The string does not exist\n");
        return 0;
    }
}