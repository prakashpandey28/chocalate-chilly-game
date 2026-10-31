#include <stdio.h>

int main()
{
    int chocalate = 12;
    int player1, player2;
    int valid;

    while(chocalate > 0)
    {
        // Player 1 turn
        do
        {
            valid = 1;

            printf("\nPlayer 1 turn\n");
            printf("Pick chocolates (1 to 3): ");
            scanf("%d", &player1);

            if(player1 < 1 || player1 > 3 || player1 > chocalate)
            {
                printf("Invalid choice!\n");
                valid = 0;
            }

        } while(valid == 0);

        chocalate = chocalate - player1;

        printf("Chocolates remaining = %d\n", chocalate);

        if(chocalate == 0)
        {
            goto winner1;
        }

        // Player 2 turn
        do
        {
            valid = 1;

            printf("\nPlayer 2 turn\n");
            printf("Pick chocolates (1 to 3): ");
            scanf("%d", &player2);

            if(player2 < 1 || player2 > 3 || player2 > chocalate)
            {
                printf("Invalid choice!\n");
                valid = 0;
            }

        } while(valid == 0);

        chocalate = chocalate - player2;

        printf("Chocolates remaining = %d\n", chocalate);

        if(chocalate == 0)
        {
            goto winner2;
        }
    }

    winner1:
    printf("\nPlayer 1 is winner!\n");
    printf("Player 2 got chilly!\n");
    return 0;

    winner2:
    printf("\nPlayer 2 is winner!\n");
    printf("Player 1 got chilly!\n");

    return 0;
}