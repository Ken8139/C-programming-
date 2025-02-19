#include<stdio.h>
int main() {
    char string[20];
    printf("\n Enter the string:");
    scanf("%s",string);
    int length=0;
    char temp;
    for(length=0;string[length]!='\0';length++);
    int i=length-1;
    for(int j=0;j<length/2;j++){
      temp=string[i];
      string[i]=string[j];
      string[j]=temp;
      i--;
    }
    printf("Reversed string :%s",string);
    return 0;
}
