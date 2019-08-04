#include<stdio.h>
int main(){
    int n,i;
    int arr[20];
    int smallest,pos;

    printf("Enter Size of Array :\n");
    scanf("%d",&n);

    printf("Enter Elements :\n");
    for(i=0;i<n;i++){
        printf("Array[%d] =",i);
        scanf("%d",&arr[i]);
    }
    pos = 0;
    smallest = arr[0];
    for(i=0;i<n;i++){
        if(smallest > arr[i]){
            smallest=arr[i];
            pos = i;
        }
    }
    printf("Smallest is = %d\n",smallest);
    printf("Position is %d\n",pos);
    return 0;
}