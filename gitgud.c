#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, i;
    srand(time(NULL));  // Seed ONCE

    for(i=0; i<10; ++i) // Loop 100 times for random numbers
    {
        num = rand();
        num = num % 100;
        printf("%d\n", num);
    }
}