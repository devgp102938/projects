#include<stdio.h>
void main()
{
	char operators;
	
	int i,j;
	int rows,columns;
	int validOpration = 1;
	
	while(validOpration)
	{	
	
		printf("Enter the number of rows for the matrices: ");
    	scanf("%d", &rows);

    	printf("Enter the number of columns for the matrices: ");
    	scanf("%d", &columns);
	
		int numbers1[rows][columns], numbers2[rows][columns], result[rows][columns];
	
		printf("\nchoose what you want to perform with your matrix\n");
		printf("Addition (+)\n");
		printf("Subtraction (-)\n");
		printf("Multiplication (*)\n");
		printf("Exit (E)\n");
		printf("Your choice:");
		scanf(" %c",&operators);
		
			switch(operators)
			{
				case '+':		
					printf("Total rows = %d\n",rows);
					printf("Total columns = %d\n",columns);
			
					printf("Enter the elements of first Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers1[i][j]);
						}
					}
			
					printf("Enter the elements of Second Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers2[i][j]);
						}
					}
			
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							result[i][j] = numbers1[i][j] + numbers2[i][j];
						}
					}
			
					printf("The first Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers1[i][j]);
						}
						printf("\n");
					}
			
					printf("The second Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers2[i][j]);
						}
						printf("\n");
					}
			
					printf("The result of Matrix addition:\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",result[i][j]);
						}
						printf("\n");
					}
				break;
					
				case '-':
					
					printf("Total rows = %d\n",rows);
					printf("Total columns = %d\n",columns);
					
					printf("Enter the elements of first Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers1[i][j]);
						}
					}
					
					printf("Enter the elements of Second Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers2[i][j]);
						}
					}
					
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							result[i][j] = numbers1[i][j] - numbers2[i][j];
						}
					}
					
					printf("The first Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers1[i][j]);
						}
						printf("\n");
					}
					
					printf("The second Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers2[i][j]);
						}
						printf("\n");
					}
					
					printf("The result of Matrix subtraction:\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",result[i][j]);
						}
						printf("\n");
					}
				break;
				
				case '*':
								
					printf("Total rows = %d\n",rows);
					printf("Total columns = %d\n",columns);
					
					printf("Enter the elements of first Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers1[i][j]);
						}
					}
					
					printf("Enter the elements of Second Matrix (%dx%d):\n",rows,columns);
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("Elements[%d][%d]:",i,j);
							scanf("%d",&numbers2[i][j]);
						}
					}
					
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							result[i][j] = numbers1[i][j] * numbers2[i][j];
						}
					}
					
					printf("The first Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers1[i][j]);
						}
						printf("\n");
					}
					
					printf("The second Matrix\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",numbers2[i][j]);
						}
						printf("\n");
					}
					
					printf("The result of Matrix multiplication:\n");
					for(i=0;i<rows;i++)
					{
						for(j=0;j<columns;j++)
						{
							printf("%d ",result[i][j]);
						}
						printf("\n");
					}
				break;
				
				case 'E':
					printf("Exiting the program!Good bye.");
					validOpration = 0;
				return;
				
				
				default:
					printf("enter the valid operators\n");
					printf("Enter your choice agian:\n");
				break;
			}
		}
	}
