#include <stdio.h>
int main()
{
    int c;
    float a, b, sum, div, pro, sub;
    char d;
    do
    {
        printf("Enter First no:");
        scanf("%f", &a);
        printf("Enter Second no:");
        scanf("%f", &b);
        printf("Enter the operation you would like to do");
        printf("\n1 for sum,2 for sub,3 for product,4 for div:");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                sum = a + b;
                printf("ADDITION Is:%f", sum);
                break;

            case 2:
                sub = a - b;
                printf("SUBTRACTION Is:%f", sub);
                break;

            case 3:
                pro = a * b;
                printf("MULTIPLICATION Is:%f", pro);
                break;

            case 4:
                div = a / b;
                printf("DIVISION Is:%f", div);
                break;

            default:
                printf("ERROR! Wrong choice");
        }
        printf("\nDo you wanna continue?(Y/N):");
        scanf("%s",&d);
    }
    while(d!='N');
    printf("END");
    return 0;
}