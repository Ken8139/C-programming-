#include <stdio.h>
int main() {
  int num1,num2,num3;
  printf("\nenter the three number");
  scanf("\n%d%d%d",&num1,&num2,&num3);
  if(num1>num2){
       if(num1>num3){ 
             printf("\n%d, is greater number",num1);
             }else{
             printf("\n%d,is greater number",num3);
             }
        }else if (num2>num1){
             if (num2>num3){
                  printf("\n%d, is greater number",num2);
              }else{
                   printf("\n%d, is greater number",num3);
              }
        }else{
            printf("\n%d, is greater number",num1);
        }
         return 0;
}
              
        
        
  

