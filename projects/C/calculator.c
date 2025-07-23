#include<stdio.h>
void main()
{
	int a,b,choice;
	int exitProgram = 0;
	
	while(!exitProgram)
	{
	printf("\nenter the choice\n");
	printf("1. addision\n");
	printf("2. subtraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");
	printf("enter 0 for exiting program\n");
	scanf("%d",&choice);
	
	if (choice == 0) 
		{
            printf("Goodbye! Exiting the program.\n");
            exitProgram = 1;
            continue;
        }

    if (choice < 1 || choice > 4) 
		{
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }
	
	switch(choice)
	{
		case 1:
			printf("%d + %d = %d",a,b,(a+b));
			break;
		case 2:
			printf("%d - %d = %d",a,b,(a-b));
			break;
		case 3:
			printf("%d * %d = %d",a,b,(a*b));
			break;
		case 4:
			if(b !=0)
		     printf("%d / %d = %d",a,b,(a/b));
			else
			 printf("number can't be divided by zero\n");
			break;
		default:
			printf("you entered the wrong choice\n");
			break;
	}
    }
}     
