#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int max = (a > b)
                  ? (
                        (a > c)
                            ? a
                            : c)
                  : ((b > c)
                         ? b
                         : c);

                         printf("%d max number is ",max);

    return 0;
}
