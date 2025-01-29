#include<stdio.h>
int main(){
  char value;
  printf("\nEnter a character in capital letter: ");
  value=getchar();
  value=value+32;
  printf("Lowercase letter: %c\n",value);
  
  printf("%d",value);
  
  return 0;
}
