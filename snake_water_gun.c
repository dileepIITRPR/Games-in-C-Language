#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int decider(char user, char comp)
{
    //cases
    // sc
    // sp
    // pc

    if (user == comp)
    {
        return 0;
    }

    if (user == 's' && comp == 'w')
    {
        return -1;
    }
    if (user == 'w' && comp == 's')
    {
        return 1;
    }
    if (user == 's' && comp == 'g')
    {
        return -1;
    }
    if (user == 'g' && comp == 's')
    {
        return 1;
    }
    if (user == 'g' && comp == 'w')
    {
        return -1;
    }
    if (user == 'w' && comp == 'g')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    char user;
    char comp;
    int result;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    if (number > 66)
    {
        comp = 'g';
    }

    printf("enter 's' for snake 'w' for water and 'g' for gun \n ");
    scanf("%c", &user);
    result = decider(user, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
        printf("You choose %c and computer choose  %c\n", user, comp);
        printf("enter 's' for snake 'w' for water and 'g' for guw \n ");
    }
    else if (result == 1)
    {
        printf("You won!\n");
        printf("You choose %c and computer choose  %c\n", user, comp);
    }
    else if (result == -1)
    {
        printf("You loose!\n");
        printf("You choose %c and computer choose  %c\n", user, comp);
    }
    else
    {
        printf("__ERROR__\n");
        printf("You entered invalid input : '%c'\n", user);
    }
    return 0;
}