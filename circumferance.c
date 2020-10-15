#include<stdio.h>
int main()
{
    int no;
    float rad,area,vol,cir,pi=3.142;

    printf("Enter number 1 to calculate the circumference of a circle  \n");
    printf("Enter number 2 to calculate the area of a circle  \n");
    printf("Enter number 3 to calculate the volume of a sphere \n");

    scanf("%d",&no);
    
    //The main part of the code
    
    if(no>3)
    printf("The entered number is invalid");
    exit(0);

    printf("Enter the radius of the circle ");
    scanf("%f",&rad);

    switch(no)
    {


    case 1: cir=2*pi*rad;break;
    case 2: area=pi*(rad*rad);break;
    case 3: vol=(4*pi*(rad*rad*rad))/3;break;
    default: printf("The entered number is invalid ");break;
    }
     //Use of switch case
    switch(no)
    {
        case 1: printf("The circumference of the circle is %.2f \n",cir);break;
        case 2: printf("The area of the circle is %.2f  \n",area);break;
        case 3: printf("The volume of the sphere is %.2f \n",vol);break;
    }



}
