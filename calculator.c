#include<stdio.h>
int main() {
  char op;
  int a,b,res;
  printf("\nenter the character +, -, *, /,%%  ");
  scanf("%c",&op);
  printf("\n enter two operands  ");
  scanf("%d,%d",&a,&b);
  switch (op){
    case'+':
        res=a+b;
        printf("\n%d+%d=%d",a,b,res);
        break;
    case'-':
        res=a-b;
        printf("\n%d-%d=%d",a,b,res);
        break;
         
    case'*':
        res=a*b;
         printf("\n%d*%d=%d",a,b,res);
        break;
        
    case'/':
        res=a/b;
        printf("\n%d/%d=%d",a,b,res);
        break;
         
    case'%':
         printf("\n%d %% %d=%d",a,b,a%b);
         break;
    default:
        printf("error incorrect operand value\n");
    }
        
    return 0;
}
    
  
