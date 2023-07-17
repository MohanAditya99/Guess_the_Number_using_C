#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number , guess , n_guesses = 1 ;
    srand(time(0));
    number = rand()%100+1;

    do
    {
      printf("Guess the number from 1 to 100 \n");
      scanf("%d",&guess);
      if (number>guess)
      {
        printf("Greater number please!! \n");
      }
      else if (number<guess)
      {
        printf("Lower number please!! \n");
      }
      else
        printf("Yahh!! You guessed the number in %d attempts \n",n_guesses);

        n_guesses++;  
    } while (guess!=number);
    
   
    return 0;

}

