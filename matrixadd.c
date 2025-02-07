/*Autor:Kenaz mathukutty
  Created:07/02/2025
  Two matrix addition */

#include<stdio.h>
 int main() {
   int row,col;
   printf("\n Enter the row and colum:");
   scanf("%d%d",&row,&col);
   int m1[row][col],m2[row][col],m3[row][col];
   printf("\n Enter the first matrix:\n");
   for (int i=0;i<row;i++){
     for (int j=0;j<col;j++){
        scanf("%d",&m1[i][j]);
      }
   }
   printf("\nEnter the second matrix:\n");
   for (int i=0;i<row;i++){
     for (int j=0;j<col;j++){
       scanf("%d",&m2[i][j]);
      }
    }
     for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
          m3[i][j]=m1[i][j]+m2[i][j];
        }
      }
      for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
          printf("%d\t",m3[i][j]);
         }
         printf("\n");
       }
       
      return 0;
}
