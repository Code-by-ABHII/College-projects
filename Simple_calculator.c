#include<stdio.h>
int main (){
int a,b,choice;
printf("Enter any two numbers");
scanf("%d%d",&a,&b);
printf ("1:additon\n2:substrac\n3:multiplication\n4:divison\n5:remainder\n");
printf("Enter your choice");
scanf("%d",&choice);
switch (choice)
{
case 1: printf("the addition of a and b is =%d\n",a+b);
               break;
case 2:printf("the difference between a and b is =%d\n",a-b);
               break;
case 3:printf("the product of a and b is =%d\n",a*b);
               break;
case 4:printf("the division of a and b is =%d",a/b);
               break;
case 5:printf("the reaminder of a and b is =%d",a%b);
               break;
default : printf("Entered Choice is not available");          
}
return 0;
}     