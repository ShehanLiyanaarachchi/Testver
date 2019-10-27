#include<stdio.h>
int main()
{
   
   //declaring variables
   int no1,no2,no3,max,min;

   printf("Enter three numbers : ");
   scanf("%d %d %d",&no1,&no2,&no3);
   
   //code body

   if (no1>no2 && no1>no3)
    max=no1;
   else if (no2>no1 && no2>no3)
    max=no2;
   else
    max=no3;

    if(no1<no2 && no1<no3)
        min=no1;
    else if(no2<no3 && no2<no1)
        min=no2;
    else
        min=no3;
   
   //This is the code to display the outputs

   printf("The maximum number is %d \n",max);
   printf("The minimum number is %d",min);




}
