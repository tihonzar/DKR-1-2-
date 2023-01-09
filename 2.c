#include <stdio.h>
#include <stdlib.h>

int mamory_alocate_matrics_A(int **A,int N);
void matrix_print(int ** M , int N);
int matrix_scan(int **A,int N);
int suma(int **A,int N);

int main()
{
     int **A;
     int N = 3;
     int sum;
     A = mamory_alocate_matrics_A (A,N);
     A = matrix_scan (A,N);
     sum = suma (A,N);
     matrix_print (A,N);
     printf("Sum  = %d ",sum);

    return 0;
}

void matrix_print(int ** A , int N)
{
 for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
                printf("  %d  ",A[i][j]);
        }
         printf("\n");
    }
    printf("\n\n");
}

int mamory_alocate_matrics_A(int **A,int N)
{
     A = (int **) calloc (N, sizeof (int *));
     if( A == NULL )
    {
        printf("Memory has not been allocated");
        return 0;
    }
    for(int i = 0; i < N; i++)
    {
        A[i] = (int *) calloc (N, sizeof (int));
        if(A[i]==NULL)
        {
            printf("Memory has not been allocated");
            return 0;
        }
    }
    return A;
}

int matrix_scan(int **A,int N)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
                printf("M[%d][%d]  =  ",i+1,j+1);
                scanf("%d", &A[i][j]);
                system("cls");
        }
    }
    return A;
}

int suma(int **A,int N)
{
    int x=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j>=i)
            {
                x = x + A[i][j];
            }
        }
    }
    return x;
}
