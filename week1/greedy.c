#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)

{
    // main variables
    float change;
    int coinsnumber = 0;
    
    do
    {
        printf("How much change is owed? (input template is 00.00 or 0.00)\n"); // asks the user for a change sum
        change = GetFloat();
    }
    while (change < 0); // asks for positive input
    
    // int coinsnumber = 0, quarter = 25, dime = 10, nickel = 5, penny = 1;
    int coinsowed = roundf(change * 100);
    
    while (coinsowed >= 25)
    {
        coinsowed -= 25;
        coinsnumber++;
    }
    
    while (coinsowed >= 10)
    {
        coinsowed -=10;
        coinsnumber++;
    }
    
    while (coinsowed >= 5)
    {
        coinsowed -= 5;
        coinsnumber++;
    }
    
    while (coinsowed >= 1)
    {
        coinsowed -= 1;
        coinsnumber++;
    }

    printf("%d\n", coinsnumber);
}
