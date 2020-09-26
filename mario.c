#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

void buildPyramid(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Pyramid Height:");
    }
    while (n < 1 || n > 8);

    buildPyramid(n); // call function
}

void buildPyramid(int n)
{
    int i, j;
    for (i = 0; i < n; i++) // add rows
    {
        for (j = 0; j < n; j++) // add hashes
        {
            if (j + i < n - 1) // add spaces
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}