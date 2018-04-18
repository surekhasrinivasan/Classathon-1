#include <stdio.h>
#include <cs50.h>

//declare the function
int sumFibs(int num);

//define the function
int sumFibs(int num)
{
    int result = 0;
    int startNum = 0;
    int nextNum = 1;

    while (startNum <= num)
    {
        if (startNum % 2 != 0)
        {
            result = result + startNum;
        }

        int sum = startNum + nextNum;
        startNum = nextNum;
        nextNum = sum;
    }
    return result;
}

int main(int argc, string argv[])
{
    //check if the user do not enter number
    if (argc != 2)
    {
        printf("Usage: ./sumFibs number\n");
        return 1;
    }

    int num = atoi(argv[1]);

    //output the result
    printf("%i\n", sumFibs(num));
    return 1;
}