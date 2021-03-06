/* maths quizz game using 1 to 4 options, Option 1 print how many rounds you want to do, Option 2 play the game, Option 3 show how many got wrong or right,
   Option 4 terminates the game. Menu should be shown after every option, option 3 must not be played before option 2. Menu driven game.*/
/* By Jon Kehoe */
/* Date: 12/11/2021 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int a, b, total, i, num,correct,wrong,round,answer;
    char d;

    do
    {
        printf("1 - Enter amout of rounds\n");
        printf("2 - Play Game\n");
        printf("3 - Display Stats\n");
        printf("4 - Exit Game\n");
        scanf("%d", &num);
        d = getchar();

        if (num == 1)
        {
            // reset correct and wrong to 0
            correct = 0;
            wrong = 0;
            printf("enter amount of rounds : ");
            scanf("%d", &round);
            
            //error checks for round smaller than 5
            if((round > 0 && round <= 5) && !(round >= 'a' && round <= 'z'))
            {
                continue;
            }// end if
            else
            {
                printf("Not valid! Try again\n");
            }// end else

        } // end if
        else if (num == 2)
        {
            // for loop to display n number of equations
            for (i = 0 ; i < round; i++)
            {
                // generate a random number for a random sum
                a = (rand() % 10) + 1;
                b = (rand() % 10) + 1;
                total = a * b;
                srand(time(NULL));
                printf("%d x %d : ", a, b);
                scanf("%d", &answer);
                d = getchar();
                //check to see if right answer
                if (answer == total && d != (num >= 'a' && num <= 'z'))
                {
                    printf("correct\n");
                    correct++;
                } //end if
                //check for wrong answer
                else 
                {
                    printf("wrong! answer = %d\n", total);
                    wrong++;
                } // end else
            }// end for
        }// end else if
        else if (num == 3 && (correct > 0 || wrong > 0))
        {
            // only display 3 when correct or wrong has a value greater than 0
            printf("Correct = %d\n", correct);
            printf("wrong = %d\n", wrong);
        } // end else if
        else if (num == 3 && (correct < 0 || wrong < 0))
        {
            // else if used to error check input 2 before 3
            printf("must choose option 2 before option 3");
        } //end else if

    } while (num != 4 && d != (num >= 'a' && num <= 'z'));
    printf("Ending game\n");

    return 0;
} //end main

