#include<stdio.h>
int main()
{
 int a,b,choice,res;
 printf("====BRANCHING STATEMENTS====\n");
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the Second number:");
 scanf("%d",&b);
 printf("\n----MENU---\n");
 printf("1.Check Positive,Negative orZero\n");
 printf("2.Check even or Odd\n");
 printf("3.Find Largest of Two Numbers\n");
 printf("4.Check Divisibility by5\n");
 
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 
 printf("\n---RESULT----\n");
 
  switch(choice)
 {
   case 1:
    if(a>0)
      printf("%d is Positive",a);
    else if(a<0)
      printf("%d is Negative",a);
    else
      printf("%d is Zero",a);
       
   case 2:
   	if(a%2==0)
   	 printf("%d is Even",a);
   	else
   	 printf("%d is Odd",a);
   	break;
   	
   	
   case 3:
   	if(a>b)
   	{
	  res=a;
	  printf("%d ia the Largest number",res);
}
else if (b>a)
{
	res=b;
	printf("%d is the Largest Number",res);
	}
	else
	{
		printf("Both numbers are Equal");
	}
	break;
	
	
   case4:
   	if(a%5==0)
   	  printf("%d is divisible by 5",a);
   	else
   	  printf("%d i sNot Divisible by 5",a);
   	break;
   	
    default:
    	printf("Invalid choice");
}
 return 0;
}