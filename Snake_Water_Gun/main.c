#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    0--Snake
    1--Water
    2--Gun ;)
    */
    srand(time(0));

    int player, computer = (rand() % 3);
    printf("Enter 0=Snake,1=Water and 2=Gun\n");
    scanf("%d", &player);
    printf("Computer choose :%d\n", computer);
    

    if (player == 0 && computer == 0)
    {
        printf("Draw! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win! \n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose! \n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose! \n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Draw! \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Lose! \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win! \n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Win! \n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Draw! \n");
    }
    else
    {
        printf("Snake drank the water and bullets are out of stock. Please visit after some time (❁´◡`❁)");
    }
    return 0;
}