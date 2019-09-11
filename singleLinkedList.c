#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;

void main(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&temp->data);
    temp->link =root;
    if (root == NULL)
    {
        root = temp;
    }else
    {
        struct node* p;
        p = root;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link =temp;
        
    }
    
    
}
