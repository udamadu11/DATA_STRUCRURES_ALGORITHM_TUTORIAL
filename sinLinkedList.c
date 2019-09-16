#include <stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node* link;
};
struct node* root = NULL;
int len;

void append();
void insert();
void display();
void delete();
int length();
void main(){
    int ch;
    while (1)
    {
        printf("Single linked list operation:\n");
        printf("1.Append  :\n");
        printf("2.Insert :\n");
        printf("3.length :\n");
        printf("4.Display :\n");
        printf("5.Delete :\n");
        printf("6.quite :\n");

        printf("Enter your Choice :\n");
        scanf("%d",&ch);

        switch(ch){
            case 1 : append();
                    break;
            case 2 : insert();
                    break;
            case 3 : len =length();
                        printf("Length is : %d\n\n",len);
                    break;
            case 4 : display();
                    break;
            case 5 : delete();
                    break;
            case 6 : exit(1);
                
            default : printf("invlid Choice :");
        }
    }
    
}
void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter node data :");
    scanf("%d",&temp->data);
    temp->link = NULL;

    if (root == NULL){
        
        root = temp;
    }else{
        struct node* p;
        p = root;

        while (p->link !=NULL){
            p = p->link;
        }
        p->link = temp;
        
    }
    
}
int length(){
    int count = 0;
    struct node* temp;
    temp = root;

    while (temp != NULL){
        count++;
        temp = temp->link;
    }
    return count;
    
}
void insert(){
    struct node* temp,*p;
    int loc;
    int i=1;
    printf("Enter location :");
    scanf("%d",&loc);

    if(loc > length()){
        printf("invalid length!!\n");
        printf("Available length is : %d",len);
    }
    else{
        p =root;
         while(i < loc){
             p = p->link;
             i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter the node :");
        scanf("%d",&temp->data);
        temp->link = p->link;
        p->link = temp;
    }
    
}
void delete(){
    struct node* temp;

    int loc = 0;
    printf("Enter the Location :\n");
    scanf("%d",&loc);

    if (loc > length()){
        printf("Invalid location !");
    }
    else if (loc == 1){
        temp = root;
        root = temp->link;
        temp->link = NULL;
        free(temp);
    }
    else{
        struct node* p = root;
        struct node* q;
        int i=1;
        while (i < loc-1){
            p = p->link;
            i++;
        }
        q = p->link;
        p->link = q->link;
        q->link = NULL;
        free(q);
    }
    
}
void display(){
    struct node* temp;
    temp = root;
    if (temp == NULL){
        printf("Empty\n");
    }
    else{
        while(temp != NULL){
            printf("%d-->",temp->data);
            temp = temp->link;
        }
        printf("\n\n");
    }
    
}
