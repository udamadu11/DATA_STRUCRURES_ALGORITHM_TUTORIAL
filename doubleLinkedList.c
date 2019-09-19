#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* right;
    struct node* left;
};

struct node* root = NULL;

void append(void);
int length(void);
void display(void);
void addAtBegin(void);

void main(){
    int ch,len;
    while(1){
        printf("Operation of Double linked list\n");
        printf("1.Append\n");
        printf("2.Add at Begin\n");
        printf("3.length\n");
        printf("4.Display\n");
        printf("5.Exit\n\n");

        printf("Enter your Choice :\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: append();
                    break;
            case 2: addAtBegin();
                    break;
            case 3: len = length();
                    printf("Length is : %d\n\n",len);
                    break;
            case 4: display();
                    break;
            case 5: exit(1);
            default: printf("Invalid choice.....\n\n");
        }
    }
}
void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data :\n");
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;

    if(root == NULL){
        root = temp;
    }else{
        struct node* p;
        p = root;
        while(p->right != NULL){
            p = p->right;
        }
        p->right = temp;
        temp->left = p; 
    }
}
void addAtBegin(){
    
}
int length(){
    struct node* temp;
    int count = 0;
    temp = root;
    while(temp != NULL){
        count++;
        temp = temp->right;    
    }
    return count;

}
void display(){
    struct node* temp;
    temp =root;
    if(temp == NULL){
        printf("Empty List....\n");
    }else{
        while(temp != NULL){
            printf("%d-->",temp->data);
            temp =temp->right;
        }
        printf("\n\n");
    }
}