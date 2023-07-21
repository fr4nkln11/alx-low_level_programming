#include "main.h"

void positive_or_negative(int n)
{
	printf("%d is ", n);

    if (n > 0)
    {
            printf("positive");
    } else if (n == 0)
    {
            printf("zero");
    } else if (n < 0)
    {
            printf("negative");
    }
    printf("\n");
}
