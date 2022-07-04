//number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    //printf("Number is %d\n", number); 
    printf("guess a number between 1 and 100\n");
    do
    {
       
        scanf("%d",&guess);
        if (guess > number)
        {
            //printf("Entered number is larger!\n");
            printf("Smaller number please!\n");
        }
        else if (guess < number)
        {
            //printf("Entered number is smaller!\n");
            printf("Larger number please!\n");
        }
        else
        {
            printf("You guessed the number correctly in %d attempts\n", nguess+1);
        }
        nguess++;

    } while (guess != number);
    

    return 0;
}