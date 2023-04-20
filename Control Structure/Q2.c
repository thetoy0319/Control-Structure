#include <stdio.h>

int main()
{
    int num1, num2, num3, mai;

    printf("enyer the value of number1: ");
    scanf("%d", &num1);

    printf("enyer the value of number1: ");
    scanf("%d", &num2);

    printf("enyer the value of number1: ");
    scanf("%d", &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            mai = num1;
        }
        else
        {
            mai = num3;
        }
    }
    else
    {

        if (num2 < num3)
        {
            mai = num2;
        }
        else
        {
            mai = num3;
        }
    }

    printf("mai number is %d ",mai);
    return 0;
}