#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node *p,*head,*newNode,*ptr;
int n,val;
void Insertwrtval(){
    printf("Enter the value:");
    scanf("%d",&val);
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the new data to be inserted:");
    scanf("%d",&newNode->data);
    ptr=head;
    while(ptr->data!=val){
        ptr=ptr->next;
    }
    newNode->next=ptr->next->prev;
    newNode->prev=ptr;
    ptr->next->prev=newNode;
    ptr->next=newNode;
}
void createList(){
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            head=(struct Node*)malloc(sizeof(struct Node));
            p=head;
            head->prev=NULL;
        }
        else{
            p->next=(struct Node*)malloc(sizeof(struct Node));
            p->prev=p;
            p=p->next;
        }
        scanf("%d",&p->data);
    }
      p->next=NULL;
}
void Display(){
    p=head;
    while(p!=NULL){
        printf(" %d ",p->data);
        p=p->next;
    }
}
int main(){
    createList();
    Display();
    Insertwrtval();
    Display();
}