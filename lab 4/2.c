#include <stdio.h>
struct poly{
    int coeff;
    int power;
};
void fun(int n){
        struct poly poly1[n];
    for(int i=0;i<n;i++){
        printf("Enter the coefficient of term %d:",i+1);
        scanf("%d",&poly1[i].coeff);
        printf("Enter the power of term:");
        scanf("%d",&poly1[i].power);
    }
    for(int i=0;i<n-1;i++){
        if(poly1[i+1].coeff>0)
        printf("%dx^%d+",poly1[i].coeff,poly1[i].power);
        else if(poly1[i+1].coeff<0)
       printf("%dx^%d",poly1[i].coeff,poly1[i].power);
    }
    if(poly1[n-1].power==0)
        printf("%d",poly1[n-1].coeff);
    else
    printf("%dx^%d",poly1[n-1].coeff,poly1[n-1].power);
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    fun(n);
    
    return 0;
}