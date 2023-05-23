#include <stdio.h>
 
int main() 
{
  int Rows, i, j;
    
  printf("Please Enter the Number of Rows:  ");
  scanf("%d", &Rows);
    
  printf("\nPrinting Inverted Right Angled Triangle \n \n");
  for ( i = Rows ; i > 0 ; i-- ) 
  {
      for ( j = i ; j > 0 ; j-- ) 
      {
          printf("* ");
      }
      printf("\n");
  }
  return 0;
}
