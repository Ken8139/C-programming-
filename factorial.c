#include <stdio.h>
int main(){
    int num, result=1;				
    printf("Enter Number: ");
    scanf("%d", &num);
    if(num>0){
        while(num>0){
            result *= num;
            num -= 1;    
        }
        printf("%d is the factorial. \n",result);
    } else{
        printf("Enter a positive number. \n");
    }
    
    return 0;
}
  
      
