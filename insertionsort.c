#include <stdio.h>
int main()
{
  int a[5]={4,2,0,6,1},n=5,i,j,temp;
  for(i=1;i<n;i++){
    j=i;
    while(j>0 && a[j-1] > a[j]){
      temp = a[j];
      a[j]= a[j-1];
      a[j-1] = temp;
      j--;
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n", a[i]);
  }
  return 0;
}