#include <stdio.h>
int main(){
    int arr[100];
    int i,n;

    printf("Enter the Size of element : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("%d Element ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d Element is %d\n",i,arr[i]);
    }

    return 0;

}