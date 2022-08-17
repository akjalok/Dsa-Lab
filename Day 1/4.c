#include <stdio.h>

struct emp{
    char name[20];
    int empID;
    float salary;
    char address[30];
};

int main(){
int t;
int n;
void avg(struct emp a[],int n);
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

for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if(s1[j].empID>s1[j+1].empID){
        t=s1[j].empID;
        s1[j].empID=s1[j+1].empID;
        s1[j+1].empID=t;
            }
}
}
avg(s1,n);
for(int i=0;i<n;i++){
   printf("\n\nName:%s \nEmployee ID:%d\nSalary:%.2f\nAddress:%s",s1[i].name,s1[i].empID,s1[i].salary,s1[i].address);

}
return 0;
}

void avg(struct emp a[],int n){
float sum=0;
for(int i=0;i<n;i++){
    sum=a[i].salary+sum;
}
sum=sum/n;
printf("\n\nAverage salary:%.2f",sum);
}

