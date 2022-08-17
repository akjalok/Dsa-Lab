#include <stdio.h>
struct student{
    char name[20];
    int roll_no;
    float mark;
};

int main(){
struct student s1;
printf("Enter the name of the student:");
scanf("%s",s1.name);
printf("Enter the roll number:");
scanf("%d",&s1.roll_no);
printf("Enter mark:");
scanf("%f",&s1.mark);
printf("\n\nName:%s \nRoll number:%d\nMarks:%.2f",s1.name,s1.roll_no,s1.mark);
return 0;
}