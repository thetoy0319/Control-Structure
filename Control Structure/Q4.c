#include <stdio.h>

int main()
{
    int  num1, num2, num3, num4, num5, min;

    printf("Enter the valu of num1: ");
    scanf("%d", &num1);

    printf("Enter the valu of num2: ");
    scanf("%d", &num2);

    printf("Enter the valu of num3: ");
    scanf("%d", &num3);

    printf("Enter the valu of num4: ");
    scanf("%d", &num4);

    printf("Enter the valu of num5: ");
    scanf("%d", &num5);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 < num5)
                {
                    min = num1;
                }
                else
                {
                    min = num5;
                }
            }
            else
            {
                if (num4 < num5)
                {
                    min = num4;
                }
                else
                {
                    min = num5;
                }
            }
        }
        else
        {
            if (num3 < num4)
            {

                if (num3 < num5)
                {
                    min = num3;
                }
                else
                {
                    min = num5;
                }
            }
        }
    }
    else
    {
        if (num2 < num3)
        {
            if (num2 < num4)
            {
                if (num2 < num5)
                {
                    min = num2;
                }
                else
                {
                    min = num5;
                }
            }
            else
            {
                if (num4 < num5)
                {

                    min = num4;
                }
                else
                {
                    min = num5;
                }
            }
        }
        else{
            if (num3 < num4)
            {
                if (num3 < num5)
                {
                    min = num3;
                }
                else{
                    min = num5;
                }
                
            }
            else{
                if (num4 < num5)
                {
                  
                  min = num4;
                }
                else{
                    min= num5;
                }
                
            }
            
        }
    }

    printf("%d MIN number is ", min);
    return 0;
}