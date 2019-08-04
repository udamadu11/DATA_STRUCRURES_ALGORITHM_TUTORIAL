#include<stdio.h>
int main(){
    int i,n;
    int large,secondLarge,thirdLarge;
    int arr[20];

    printf("Enter Size of Array :\n");
    scanf("%d",&n);

    printf("Elements are : \n");
    for (i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("Elements Are Arra[%d] = %d\n",i,arr[i]);
    }

    large = arr[0];
    for(i=0;i<n;i++){
        if(large < arr[i]){
            large = arr[i];
        }
    }
    secondLarge = arr[1];
    for(i=0;i<n;i++){
        if(arr[i] != large){
            if (secondLarge < arr[i]){
                secondLarge = arr[i];
            }

            
        }
    }
    

    printf("Large Number is : %d\n",large);
    printf("Second Large Number is : %d\n",secondLarge);
    printf("Third Large Number is : %d\n",thirdLarge);
    return 0;
    
}