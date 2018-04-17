#include <stdio.h>
#include <cs50.h>

//declare the function
long long factorialize(int num);

//define the function
long long factorialize(int num)
{
    long long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = i  * result;
    }
    return result;
}

int main(int argc, string argv[])
{
    //check if the user do not enter number
    if (argc != 2)
    {
        printf("Usage: ./factorialize number\n");
        return 1;
    }

    int num = atoi(argv[1]);

    //output the result
    printf("%llu\n", factorialize(num));
    return 1;
}