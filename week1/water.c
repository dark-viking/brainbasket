#include <cs50.h>
#include <stdio.h>

int GetPositiveInt();

int main(void)

{
    int n = GetPositiveInt();
    
    // calculate ounces per minute
    int m = 192;

    // calculate water consumption
    int c = (m / 16) * n;
    
    // show water consuption per time indicated
    printf("Minutes: %i\n", n);
    printf("Bottles: %i\n", c);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("Indicate the time of showering: ");
        n = GetInt();
    }
    while (n < 1);
    return n;
}
