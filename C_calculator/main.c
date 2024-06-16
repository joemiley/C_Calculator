#include <stdio.h>
#include <stdlib.h>

calculation();

int main()
{

    calculation();
    return 0;
}

calculation(){

    double total;
    double num1;
    double num2;
    char op;
    char resetChoice;
    int counter = 0;

    do{
        do{
            if(counter == 0){
                printf("please input the first number : ");
                scanf("%lf", &num1);
                printf("first number: %lf \n", num1);

                printf("please input the second number : ");
                scanf("%lf", &num2);
                printf("second number: %lf \n", num2);

                fflush (stdin);
                printf("please input the operation required (/*+-): ");
                scanf("%c", &op);
                printf("operation = %c \n", op);

                if(op == '+'){
                    total = num1 + num2;
                    counter = 1;
                }
                else if(op == '-'){
                    total = num1 - num2;
                    counter = 1;
                }
                else if(op == '/'){
                    total = num1 / num2;
                    counter = 1;
                }
                else if(op == '*'){
                    total = num1 * num2;
                    counter = 1;
                }
                else if(op != '+' ||op != '-' ||op != '/' ||op != '*'){
                    fflush (stdin);
                    printf("operation was wrong. please press any key to retry \n");
                    getchar();
                    system("cls");

                }
            }
            else if (counter != 0){

            }

        }while(counter == 0);

        printf("%lf %c %lf = %lf \n", num1, op, num2, total);
        fflush(stdin);

        printf("would you like to go again? y/n: ");
        scanf("%c", &resetChoice);

        if(resetChoice == 'n'){
            counter = 2;
        }
        else if (resetChoice == 'y'){
            counter = 0;
        }
        else{
            counter = 1;
        }

    }while(counter < 2);

    return 0;
}
