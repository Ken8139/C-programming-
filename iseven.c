#include<stdio.h>
int iseven(int num);
int main(){
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   if (iseven(num)){
       printf("the no is even");
    }else{
         printf("the no is odd");
     }
     return 0;
}
int iseven(int num){
     if (num%2==0){
          return 1;
      }else{
          return 0;
       }
}
