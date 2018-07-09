#include<stdio.h>
int main(){
    int a[5]={3,6,2,7,8},n=5,i=0,j=0,target=7,step=0;
    for(i=0;i<n;i++){
        if(a[i]==target){
            step=1;
            printf("Found at index : %d ",i);
            break;
        }
    }
    if(step==0){
        printf("Not found");
    }
    return 0;
}