#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int max = ((a > b) ? a : b)

                      > ((c > d) ? c : d)
                  ? ((a > b) ? a : b)
                  : (
                        (c > d)
                            ? c
                            : d);

                            printf("%d max id: ",max);

    return 0;
}