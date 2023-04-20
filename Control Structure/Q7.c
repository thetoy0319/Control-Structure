#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int max = ((a > b) ? a : b) >
                      ((c > d) ? c : d)
                  ? (

                        (
                            (a > b) ? a : b) > e
                            ? ((a > b) ? a : b)
                            : e)
                  : (((c > d) ? c : d) > e ? ((c > d) ? c : d) : e);
    printf("%d max number is: ", max);

    return 0;
}