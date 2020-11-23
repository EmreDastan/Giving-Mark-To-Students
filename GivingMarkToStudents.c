#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
int main()
{
    void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
    printf("Pelase enter the exam score of the student :  ");
    int scoreinput;
    scanf("%d" , &scoreinput);
        if ((scoreinput > 100) || (scoreinput < 0)) {
            printf("Please enter a score value between 0 and 100");
            sleep(2000);
        }
        else if (scoreinput > 90) {
            printf("Mark is 'A'");
            sleep(2000);
        }
        else if (scoreinput >= 80 && scoreinput <= 89) {
            printf("Mark is 'B'");
            sleep(2000);
        }
        else if (scoreinput >= 70 && scoreinput <= 79) {
            printf("Mark is 'C'");
            sleep(2000);
        }
        else if (scoreinput >= 60 && scoreinput <= 69) {
            printf("Mark is 'D'");
            sleep(2000);
        }
        else if (scoreinput < 60) {
            printf("Mark is 'F'");
            sleep(2000);
        }
return 0;
}