#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand() % 100 +1 ;//it generate number b/w 1 and 100
   // printf("the number is %d",number);
    do{
        printf("Guess the number betwwn 1 to 100\n");
        scanf("%d",&guess);
        if(guess > number){
              printf("Lower number plz\n");
        }
        else if(guess < number){
            printf("higher number plz\n");
        }
        else{
             printf("You guess it in %d attempts \n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}