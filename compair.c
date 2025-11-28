#include<string.h>
#include<stdio.h>
int main() {
  char string1[100],string2[100];
  printf("\n Enter the first string:");
  scanf("%s",string1);
  printf("\n Enter the second string:");
  scanf("%s",string2);
  int compare=strcmp(string1,string2);
  if (compare==0){
    printf("\n Equal string");
  }else{
     printf("\n String is not equal");
   }
   return 0;
}
  


  
