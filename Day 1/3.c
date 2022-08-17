#include <stdio.h>
#include <string.h>
struct emp{
    char name[20];
    int empID;
    float salary;
    char address[30];
};

int main(){
char t[20];
int n;
printf("Enter the number of employees:\n");
scanf("%d",&n);
struct emp s1[n];
for(int i=0;i<n;i++){
printf("\n\nEnter the name of the employee:");
scanf("%s",s1[i].name);
printf("\nEnter the employee id:");
scanf("%d",&s1[i].empID);
printf("\nEnter salary:");
scanf("%f",&s1[i].salary);
printf("\nEnter the address:");
scanf("%s",s1[i].address);
}
//understand this
for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if(strcmp(s1[j].name, s1[j+1].name) > 0){
        strcpy(t, s1[j].name);
        strcpy(s1[j].name,s1[j+1].name);
        strcpy(s1[j+1].name,t);
}
    }
}
//***
for(int i=0;i<n;i++){
   printf("\n\nName:%s \nEmployee ID:%d\nSalary:%.2f\nAddress:%s",s1[i].name,s1[i].empID,s1[i].salary,s1[i].address);

}
return 0;
}