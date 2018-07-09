#include <stdio.h> 
int main()
{
   int array[5]={5,3,7,3,2}, n=5, i, j, position, temp; 
   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      position = i; 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( array[position] > array[j] )
            position = j;
      }
      if ( position != i )
      {
         temp = array[i];
         array[i] = array[position];
         array[position] = temp;
      }
   } 
   printf("Sorted list in ascending order:\n"); 
   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", array[i]); 
   return 0;
}