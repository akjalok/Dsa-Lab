#include <stdio.h>
#include <stdlib.h>
void nonzero(int **p, int n)
{
    int non = 0;
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (p[i][j] != 0)
            {
                non++;
            }
        }
    }
    printf("Total number of non zero element in the array is %d\n", non);
}
void sumabove(int **p, int n) 
{
	int i,j;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = sum + p[i][j];
        }
    }
    printf("The sum of elements above the leading diagonal of the matrix is %d\n",sum);
}
void sumbelow(int **p, int n)
{
	int i,j;
    int sum = 0;
    int f = n-2;
    for (i = 1; i <n;i++)
    {
        for (j = n-1; j >f;j--)
        {
            sum = sum + p[i][j];
        }
        f--;
    }
    printf("The sum of the elements below the minor diagonal of the matrix is %d\n", sum);
}
void product(int **p, int n) 
{
	int i,j;
    int k = 1;
    for (i = 0; i < n;i++)
    {
        for (j = i; j == i;j++)
        {
            k = k * p[i][j];
        }
    }
    printf("The product of elements of diagonal of the matrix is %d\n", k);
}
int main()
{
    int n, i, j;
    int **p;
    printf("Enter the value of n for the size of array [ n X n ]\n");
    scanf("%d", &n);
    p = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        p[i] = (int *)malloc(n * sizeof(int));
    }
    int g = 1;
    for (i = 0; i < n; i++)
    {
    printf("Enter %d elements in row %d\n", n,(g++));
    for (j = 0; j < n; j++)
    {
        scanf("%d", &p[i][j]);
        }
    }
    printf("\n");
    printf("The matrix you gave as input is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    nonzero(p, n);
    sumabove(p, n);
    sumbelow(p, n);
    product(p, n);
    return 0;
}