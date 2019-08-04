#include<stdio.h>
int main(){
	int i,n;
	int arr[20];
	int total = 0;
	float avg = 0;
	
	printf("Enter size of Array : ");
	scanf("%d",&n);

	printf("Enter Elements :\n");

	for(i=0;i<n;i++){
		printf("ARRAY[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	printf("Elements are :\n");
	for(i=0;i<n;i++){
		printf("Array[%d] = %d\n",i,arr[i]);
	}
	 
	for(i=0;i<n;i++){
		total = total + arr[i];
	}
	avg = (float)total/n;
	printf("Total is %d\n",total);
	printf("Average is %f\n",avg); 
	return 0;
}
