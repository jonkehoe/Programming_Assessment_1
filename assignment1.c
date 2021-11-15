#include <stdio.h>

int main()
{
    int num = 0;
    int i = 0;
    int correct = 0;
    int wrong = 0;
    int round = 0;
    int answer = 0;
    int ran_num1 = 0;
    int ran_num2 = 0;
    int ran_num3 = 0;

    do
    {
        printf("1 - Enter amout of rounds\n");
        printf("2 - Play Game\n");
        printf("3 - Display Stats\n");
        printf("4 - Exit Game\n");
        scanf("%d", &num);
        // srand(time(NULL));
        // ran_num1 = (rand() % 10) + 1;
        // ran_num2 = (rand() % 10) + 1;
        // ran_num3 = (rand() % 10) + 1;

        if (num == 1)
        {
            correct = 0;
            wrong = 0;
            printf("enter amount of rounds : ");
            scanf("%d", &round);
            
        }// end if
        else if (num == 2)
        {
            // for loop to display n number of equations
            for (i = 0; i < round; i++)
            {
                printf("8/2+4 : ");
                scanf("%d", &answer);
                //check to see if right answer
                if (answer == 8)
                {
                    printf("correct\n");
                    correct++;
                }//end if
                //check for wrong answer
                else
                {
                    printf("wrong! answer = 8\n");
                    wrong++;
                }// end else
            }// end for
        }// end else if
        else if (num == 3 && (correct > 0 || wrong > 0))
        {
            // only display 3 when correct or wrong has a value greater than 0
            printf("Correct = %d\n", correct);
            printf("wrong = %d\n", wrong);
        }// end else if
        else if (num == 3 && (correct < 0 || wrong < 0))
        {
            // else if used to error check input 2 before 3
            printf("must choose option 2 before option 3");
        }//end else if

    } while (num != 4);
    printf("Ending game\n");

    return 0;
}//end main
