#include <stdio.h>
#include <cs50.h>

//declare the function
bool isPrime(int);

//declare the function
int sumPrimes(int);

int main(int argc, string argv[])
{
    //check if the user do not enter number
    if (argc != 2)
    {
        printf("Usage: ./sumPrimes number\n");
        return 1;
    }

    int number = atoi(argv[1]);

    // if (isPrime(number))
    // {
    //     printf("%i is prime\n", number);
    // }
    // else
    // {
    //     printf("%i is NOT prime\n", number);
    // }

    //output the result
    printf("sum of primes is: %i\n", sumPrimes(number));
    //return 1;
}

bool isPrime(int num)
{
    for (int n = 2; n < num; n++)
    {
        if (num % n == 0)
        {
            return false; //number is not prime
        }
    }
    return true;
}

//define the function
int sumPrimes(int numb)
{
    int total = 0;
    for (int n = 2; n <= numb; n++)
    {
        if (isPrime(n))
        {
            total = total + n;
        }
    }
    return total;
}
