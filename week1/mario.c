#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int height, row, space, hash; // list of variables
 
    do
    {
        printf("Indicate the number of rows (23 rows max): "); // asks the user to enter value from 0 to 23
        height = GetInt();
    }
    
    while ((height < 0) || (height > 23)); // range for the number of rows
    
    for (row = 1; row <= height; row++)
    {
        for (space = (height - row); space > 0; space--) // prints spaces
        {
            printf(" ");
        }
        
        for (hash = 1; hash <= (row + 1); hash++) // prints hashes
        {
            printf("#");
        }
        
        printf("\n"); // prints new line
    }
    
    return 0;
}
