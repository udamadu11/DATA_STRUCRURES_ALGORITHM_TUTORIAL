#include <stdio.h>
int main(){
    int i,n,m,loc;
    int a[20];
    int b[20];
    printf("Enter the Size First Array :\n");
    scanf("%d",&n);
    printf("Enter First Array Element :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("Array[%d] = %d\n",i,a[i]);
    }
    
    printf("Enter the Size second Array :\n");
    scanf("%d",&m);
    printf("Enter Second Array Element :\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++){
        printf("Array[%d] = %d\n",i,b[i]);
    }

    printf("ENTER LOCATION :\n");
    scanf("%d",&loc);

    for(i=n-1;i>=loc;i--){
        a[i+m]=a[i];
    }

    for(i=0;i<m;i++){
        a[loc+i] = b[i];
    }
    printf("New Elements is :\n");
    for(i=0;i<n+m;i++){
        printf("%d\n",a[i]);
    }

}