#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int side1 = 3;
    int side2 = 4;
    int side3 = 5;

    // Check if all sides are positive
    if (side1 > 0 && side2 > 0 && side3 > 0)
    {
        // Check the triangle inequality theorem
        if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
        {
            printf("These sides form a triangle.\n");
        }
        else
        {
            printf("These sides do not form a triangle.\n");
        }
    }
    else
    {
        printf("Invalid side lengths.\n");
    }

    return 0;
}
