#include<stdio.h>
void multiply(int,int);
int main() {
    int num1,num2;
    printf("Enter the two number:");
    scanf("%d%d",&num1,&num2);
    multiply(num1,num2);
    return 0;
}
void multiply(int num1,int num2){
   int product;
   product = num1*num2;
   printf("\n%d*%d=%d",num1,num2,product);
   
    
}

