 /*
AUTHOR:KENAZ MATHUKUTTY
CERATED:26/03/2025
AIM:Power of a Number Using Recursion: Write a program to calculate the power of a number using recursion. The base and exponent should be taken as input from the user.*/
#include<stdio.h>
int power(int num1,int num2);
int main(){
   int base,a,result;
   printf("Enter the base number");
   scanf("%d",&base);
   printf("Enter the power:");
   scanf("%d",&a);
   result=power(base,a);
   printf("Power=%d",result);
   return 0;
}
int power(int base,int a){
   if (a != 0)
      return (base*power(base,a-1));
   else 
      return 1;
}


