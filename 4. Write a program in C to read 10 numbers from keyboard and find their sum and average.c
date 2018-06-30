/*4. Write a program in C to read 10 numbers from keyboard and find their sum and average. Go to the editor
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000 */
#include<stdio.h>
void main()
{
  int i,num,sum=0,avg;
  printf("Input the 10 numbers\n");
  for(i=1;i<=10;i++)
  {
    printf("Number- %d=",i);
    scanf("%d",&num);
    sum=sum+num;
    }
  printf("The sum of 10 no. is %d\n",sum );
  avg=sum/10;
  printf("The average is : %d\n",avg);
}
