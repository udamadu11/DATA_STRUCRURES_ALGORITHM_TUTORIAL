#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* root = NULL;

void add(void);
void swap(void);
void display(void);

void main(){
    int ch;
    while(1){
        printf("Swaping using Link list\n\n");
        printf("1.Add\n");
        printf("2.Swap\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter your choice :");
        scanf("%d",&ch);

        switch(ch){
            case 1: add();
                    break;
            case 2: swap();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
                    
            default: printf("Invalid choice !!1\n");
        }

    }
}
void add(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Node data :\n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root ==  NULL){
        root =temp;
    }else{
        struct node* p;
        p = root;
        while(p->link != NULL){
            p = p->link;
        }
        p->link=temp;

    }
}
void swap(){
    int loc,i=1;
    struct node* p,*r,*q;
    printf("Enter location to swap :\n");
    scanf("%d",&loc);
    p =root;
    while(i < loc-1){
        p = p->link;
        i++;
    }
    q = p->link;
    r = q->link;
    q->link = r->link;
    r->link = q;
    p->link = r;
}
void display(){
    struct node* temp;
    temp =root;
    if(temp == NULL){
        printf("Empty List\n");
    }else{
        while(temp != NULL){
            printf("%d-->",temp->data);
            temp= temp->link;
        }
        printf("\n\n");
    }
}