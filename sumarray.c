#include<stdio.h>
int calculate_sum(int array[],int size){
  int sum=0;
  for (int i=0;i<size;i++){
      sum +=array[i];
  }
  return sum;
}
void main() {
  int n,i;
  printf("Enter the number of Element in the array");
  scanf("%d",&n);
  int numbers[n];
  printf("Enter %d Element :\n",n);
  for(i=0;i<n;i++){
     scanf("%d",&numbers[i]);
  }
  int total_sum=calculate_sum(numbers,n);
  printf("sum of array element:%d\n",total_sum);
}
