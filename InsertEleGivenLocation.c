#include <stdio.h>
int main(){
    int n,i,loc,key;
    int arr[20];
    
    printf("Enter Size Of Array :");
    scanf("%d",&n);

    printf("Enter Element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter location To Add :");
    scanf("%d",&loc);

    printf("Enter Element to Add :");
    scanf("%d",&key);

    for(i=n-1;i<=loc;i--){
        arr[i+1] = arr[i];
    }
    arr[loc]=key;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}