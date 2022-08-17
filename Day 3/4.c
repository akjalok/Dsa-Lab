#include <stdio.h>
#include <stdlib.h>
void nonzero(int **ptr, int n)
{
    int a=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ptr[i][j]!=0){
            a++;
            }
        }
    }
printf("Number of non-zero elements in the array: %d\n",a);
}
void sum1(int **ptr, int n) 
{
    int sum=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            sum=sum+ptr[i][j];
        }
    }
printf("The sum of elements above diagonal: %d\n",sum);
}
void sum2(int **ptr, int n)
{
    int sum = 0;
    for (int i=1;i<n;i++){
        for (int j=n-1;j>=n-i;j--){
            sum=sum+ptr[i][j];
        }
    }
printf("The sum of the elements below the minor diagonal is: %d\n",sum);
}
void product(int **p,int n) 
{   
    int prod = 1;
    for (int i=0;i<n;i++){
        for (int j=i;j==i;j++){
            prod=prod*p[i][j];
        }
    }
printf("The product of elements of diagonal of the matrix: %d\n", prod);
}
int main()
{
    int n;
    int **ptr;
    printf("Enter the value of n for [ n X n ] array:");
    scanf("%d", &n);
    ptr = (int **)malloc(n * sizeof(int *));
    for (int i=0;i<n;i++)
    {
        ptr[i] = (int *)malloc(n * sizeof(int));
    }
    
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    nonzero(ptr, n);
    sum1(ptr, n);
    sum2(ptr, n);
    product(ptr, n);
    return 0;
}