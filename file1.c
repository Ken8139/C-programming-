/*
write a c programe to read a file and count the  number of codes lines and characters in it
*/

#include<stdio.h>
int main(){
   FILE *fp;
   fp=fopen("file.txt","r");
   char ch;
   int word=0,line=0,character=0;
   while(fscanf(fp,"%c",&ch)==1){
      if(ch==' '){
       word+=1;
      }
      if(ch=='.'){
       line+=1;
      }
      character+=1;
  }
  printf("\nWord count=%d",word+1);
  printf("\nline count=%d",line);
  printf("\ncharacter count=%d\n",character-1);
  fclose(fp);
  return 0;
}
   
