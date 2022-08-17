//1
#include<stdio.h>
#include<stdlib.h>
void RE(int arr[], int n)
{
   
	int prev = arr[0];
	arr[0] = arr[0] * arr[1];

	for (int i=1; i<n-1; i++)
	{
		int curr = arr[i];
		arr[i] = prev * arr[i+1];
		prev = curr;
	}
	
	arr[n-1] = prev * arr[n-1];
}

int main()
{
    int n,arr[10],*p;
    p=(int*)malloc(n*sizeof(int));
    
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the %dst element:",i+1);
        scanf("%d",&p[i]);
    }
    RE(p,n);
     printf("The final array is:");
    for (int i=0; i<n; i++)
    {   
       printf(" %d ",p[i]);
    }    
	return 0;
}