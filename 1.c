#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double S, a, sum;
    double x1 = -1;
    double x2 = -1;
    double x3;
    double y1, y2, y3;
    sum = 0;


    printf("Enter N:");
    scanf("%d", &N);
    printf("Enter a:");
    scanf("%lf", &a);

    x3 = a;
    for(int n = 1; n <= N; n++)
    {
        y1 = -1;
        y2 = -1;
        y3 = a;
        for(int i = 1; i < n; i++)
        {
            y1 = y1 * x1;
        }
        for(int i = 1; i < n-1; i++)
        {
            y2 = y2 * x2;
        }
        if(n-1==0)
        {
            y2 = 1;
        }
        for(int i = 1; i < n; i++)
        {
            y3 = y3 * x3;
        }
        if(a + y2 * n != 0)
        {
            sum = sum + y1*(y3 / (a + y2 *n));
        }
    }
    S = 1 + sum;

        printf("S = %lf", S);

    return 0;
}
