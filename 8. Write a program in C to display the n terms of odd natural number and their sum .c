/*8. Write a program in C to display the n terms of odd natural number and their sum .
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/
#include<stdio.h>
 void main()
 {
   int i,num,odd,sum=0;
   printf("Input number of terms : ");
   scanf("%d",&num);
   printf("The odd number are : " );
   for(i=1;i<=num;i++)
   {
     odd=2*i-1;
     printf("%d ",odd);
     sum=sum+odd;
   }
   printf("\nThe sum of odd number upto %d terms :%d ",num,sum);
 }
