// Bubble sort 
#include<stdio.h>
int main(){
	int a[5]={2,1,0,4,7},i=0,j=0,n=5,temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Sorted array ---: \n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i] );
	}
	return 0;
}