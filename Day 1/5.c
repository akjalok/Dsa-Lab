#include <stdio.h>

struct stu{
    char name[20];
    char address[30];
    int marks_c;
    int marks_is;
};

int main(){

int n;

printf("Enter the number of employees:\n");
scanf("%d",&n);
struct stu s1[n];
int sum[n];
for(int i=0;i<n;i++){
printf("\n\nEnter the name of the student:");
scanf("%s",s1[i].name);
printf("\nEnter the address:");
scanf("%s",s1[i].address);
printf("\nEnter marks in C:");
scanf("%d",&s1[i].marks_c);
printf("\nEnter marks in Information Sytem:");
scanf("%d",&s1[i].marks_is);
}
for(int i=0;i<n;i++){
    sum[i]=s1[i].marks_c+s1[i].marks_is;
}
for(int i=0;i<n;i++){
    printf("Info for Student %d\n Name:%s\n Total Marks:%d\n\n",i+1,s1[i].name,sum[i]);
}
return 0;
}

