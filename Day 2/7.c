#include <stdio.h>
#include <stdlib.h>
int main(){
 int n;
 int* ptr,*ptr2;
 printf("Enter the number of elements in array:");
 scanf("%d",&n);
 ptr=(int*)malloc(n*sizeof(int));
  ptr2=(int*)malloc(n*sizeof(int));
 printf("Enter array elements:");
 for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
 }
 int c=0;
 int d=1;
 for(int i=0;i<n;i++){
    if(*(ptr+i)%2==0){
        *(ptr2+c)=*(ptr+i);
        c++;
    }
    if(*(ptr+i)%2==1){
        *(ptr2+n-d)=*(ptr+i);
        d++;
    }
 }
// for(int i=0;i<n;i++){

//     if(*(ptr+i)%2==1){
//          *(ptr2+c)=*(ptr+i);
//              c++;
//     }
//  }
for(int i=0;i<n;i++){
    printf("%d ",*(ptr2+i));
}
 }
