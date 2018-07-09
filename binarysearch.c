// Binary searth
#include<stdio.h>
int main(){
	int a[5]={2,4,6,8,12},n=5,target=8,first=0,last=0,middle=0,step=0;
	first = 0;
	last = n-1;
	middle = (first + last)/2;
	while(last>=first){
		step++;
		if(a[middle] > target){
			last = middle-1;
		}
		else if (a[middle] == target){
			printf("Found at index : %d",middle);
			break;
		}
		else{
			first = middle+1;
		}
		middle = (first + last)/2;
	}
	return 0;

}