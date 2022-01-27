#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandum(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    printf("\t******** WELCOME TO OUR ROCK PAPER SECCIOR GAME ********");
    int i = 0, my_ch, comp_choice, my_point = 0, comp_point = 0;
    char *name = (char *)malloc(30 * sizeof(char));
    printf("\n\n\t\tEnter your name ::  ");
    scanf("%s", name);

    while (i < 3)
    {
        printf("\n\nRULE :: 0 for Rock , 1 for seccior , 2 for paper \n");
        i++;
        printf("\n\n\t\tTurn : %d", i);
        printf("\n\n\t\tYour choice : ");
        scanf("%d", &my_ch);
        comp_choice = getRandum(3);
        printf("\n\t\tComputer choice : %d", comp_choice);

        if (my_ch == 0 && comp_choice == 1)
        {
            printf("\n\n\t\tYou get one point!!!");
            my_point++;
        }
        else if (my_ch == 1 && comp_choice == 0)
        {
            printf("\n\n\t\tComputer get one point!!!");
            comp_point++;
        }
        else if (my_ch == 2 && comp_choice == 0)
        {
            printf("\n\n\t\tYou get one point!!!");
            my_point++;
        }
        else if (my_ch == 0 && comp_choice == 2)
        {
            printf("\n\n\t\tComputer get one point!!!");
            comp_point++;
        }
        else if (my_ch == 2 && comp_choice == 1)
        {
            printf("\n\n\t\tComputer get one point!!!");
            comp_point++;
        }
        else if (my_ch == 1 && comp_choice == 2)
        {
            printf("\n\n\t\tYou get one point!!!");
            my_point++;
        }
        printf("\n\n\tscore ::");
        printf("\n\n\tYOU :: %d", my_point);
        printf("\n\n\tCPU :: %d", comp_point);
    }

    if (my_point > comp_point)
    {
        printf("\n\n\t******* %s you are a champion!! ********", name);
        printf("\n\n\t******* CONGRATULATION YOU WIN!! *******");
    }
    else if (my_point < comp_point)
    {
        printf("\n\n\tYOU LOOSE . BETTER LUCK NEXT TIME %s .", name);
    }
    else
    {
        printf("\n\n\t\tMATCH DRAWN!!!");
    }
    free(name);
    // printf("%d",getRandum(3));
    return 0;
}