#include<stdio.h>
#define PI 3.14159
void main()
{
	float length,width,radius,side,area; 
	char choice;
	int validOprations = 0;

	while(!validOprations)
	{
	printf("\n\nEnter choice of area");
	printf("\n a. Rectangle");
	printf("\n b. Circle");
	printf("\n c. Square");\
	printf("\n\nFor exiting programme press E");
	printf("\n\nChoose any of this for finding area");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case 'a':
			printf("enter the length\n");
			scanf("%f",&length);
			printf("enter the width\n");
			scanf("%f",&width);
			area = length * width;
			printf("Area: %f\n", area);
			break;
		case 'b':
			printf("enter the radius\n");
			scanf("%f",&radius);
			area = PI * radius * radius;
	    	printf("Area: %f\n", area);
			break;
		case 'c':
			printf("enter the side\n");
			scanf("%f",&side);
			area = side * side;
			printf("Area: %f\n", area);
			break;
		case 'E':
			printf("E for exiting programme\n");
			break;
		default:
			printf("Enter within the choice\n");
			break;
	}
}

}
