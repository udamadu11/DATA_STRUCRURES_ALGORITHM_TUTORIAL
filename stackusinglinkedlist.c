#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* top = NULL;

void push(void);
void pop(void);
void display(void);

void main(){
    int ch;
    while(1){
        printf("Single Linked list using Stack\n\n");

        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.exit\n\n");

        printf("Enter your Choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            default: printf("Invalid choice\n\n");
        }
    }
}
void push(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node Data :");
    scanf("%d",&temp->data);
    temp->link = top;
    top = temp;
}
void display(){
    struct node* temp;
    if(top==NULL){
        printf("Stack is empty\n");
    }else{
        temp = top;
        while(temp != NULL){
            printf("%d\n",temp->data);
            temp = temp->link;
        }
    }
  

}
void pop(){
    struct node* temp;
    if (top == NULL){
        printf("No ELIMENT\n");
    }else{
        temp = top ;
        printf("Delete : %d\n",temp->data);
        top = top->link ;
        temp->link = NULL;
        free(temp);
    }
    
}