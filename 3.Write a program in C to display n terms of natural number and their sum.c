/*3. Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28 */
#include<stdio.h>
void main()
{
  int  i,sum=0,num;
  printf("enter the n terms for natural number and their Sum\n");
  scanf("%d",&num);
  printf("The first %d natural number is\n",num);
  for(i=1;i<=num;i++)
  {
    printf("%d ",i);
    sum=sum+i;
  }
  printf("\nThe sum of natural number upto %d terms : %d ",num,sum);
}
