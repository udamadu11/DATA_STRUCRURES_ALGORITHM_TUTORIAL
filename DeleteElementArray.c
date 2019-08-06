#include <stdio.h>
int main(){
    int i,n,loc;
    int arr[20];

    printf("Enter Size of Array :");
    scanf("%d",&n);

    printf("Enter the Elements :\n");
    for(i=0;i<n;i++){
        printf("Array[%d] =",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter location to Delete :");
    scanf("%d",&loc);

    for(i=loc;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("Array[%d] = %d\n",i,arr[i]);
    }

    return 0;
}