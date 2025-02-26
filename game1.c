#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d\n", number);

    do
    {
        printf("Guess the number between (1 - 100) : ");
        scanf("%d",&guess);

        if (guess < number)
        {
            printf("Choose bigger number\n");
        }

        else if (guess > number)
        {
            printf("Choose smaller number\n");
        }

        else
        {
            // printf("You guessed in %d attempts \n", nguess);
            printf("You win the game \n RCB lost again ");
        }

        nguess++;

    } while (number != guess);

    return 0;
}
