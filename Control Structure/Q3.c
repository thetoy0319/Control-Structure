#include <stdio.h>

int main()
{
    int a, b, c, d, max;

    printf("enter the value of a");
    scanf("%d", &a);

    printf("enter the value of a");
    scanf("%d", &b);

    printf("enter the value of a");
    scanf("%d", &c);

    printf("enter the value of a");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                max = a;
            }
            else
            {
                max = d;
            }
        }
        if (c > d)
        {

            max = c;
        }
        else
        {
            max = d;
        }
    }
    else
    {
        if (b > c)
        {

            if (b > d)
            {
                max = b;
            }
            else
            {
                max = d;
            }
        }
        else
        {
            if (c > d)
            {
                max = c;
            }
            else
            {
                max = d;
            }
        }
    }

    printf("%d max number",max);

    return 0;
}