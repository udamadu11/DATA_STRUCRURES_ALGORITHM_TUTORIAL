#include<stdio.h>
int stack[10];
int top = -1;
int arr[10];
void push(int);
int pop();
void main(){
    int n,i,val;

    printf("Enter size Of Array :\n");
    scanf("%d",&n);

    printf("Enter the Array Elements:\n");
        for(i=0;i<n;i++){
            printf("Array[%d] :",i);
            scanf("%d",&arr[i]);
        }
        
    for(i=0;i<n;i++){
        push(arr[i]);
    }
    for(i=0;i<n;i++){
        val = pop();
        arr[i] = val;
    }

    printf("Reverse Array is :\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void push(int val){
    stack[++top] = val;
    
}
int pop(){
    return stack[top--];
}