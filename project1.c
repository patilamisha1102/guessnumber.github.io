#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, n, nguesses = 1;
    srand(time(0));
    n = rand() % 100 + 1; //genrate random number between 1-100
    //printf("Enter the number : %d \n",n);
    //keep running the loop ubbtil the number is guessed

    do
    {
        printf("Guess the numbern 1 to 100\n");
        scanf("%d", &guess);

        if (guess > n)
        {
            printf("Lower Number Please \n");
        }
        else if (guess < n)
        {
            printf("Greater Number Please \n");
        }
        else
        {

            printf("You win!! You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != n);
    return 0;
}
