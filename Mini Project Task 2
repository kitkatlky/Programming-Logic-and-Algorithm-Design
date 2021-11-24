/*
Write a menu-based program in C that uses a set of functions to perform the following operations 

Task 2
To perform addition, subtraction, and multiplication on two matrices depending upon the user’s choice.
*/

#include<stdio.h>
#include<stdlib.h>
#define row 10
#define col 10
int main()
{
	int row1,col1;
	int row2,col2;
	int i,j;
	float mat1[row][col];
	float mat2[row][col];
	float	mat_res[row][col];
	printf("\n Input the row of the matrix->1:");
	scanf("%d",&row1);
	printf("\n Input the col of the matrix->1:");
	scanf("%d",&col1);
	printf("\n Input data for matrix->1 \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("Input Value for: %d:   %d:",i+1,j+1);
			scanf("%f",&mat1[i][j]);
		}
	}
	
	printf("\n Input the row of the matrix->2:");
	scanf("%d",&row2);
	printf("\n Input the col of the matrix->2:");
	scanf("%d",&col2);
	printf("\n Input data for matrix->2\n");
	for(i=0;i<row2;i++)
	{
		for (j=0;j<col2;j++)
		{
			printf("Input Value for: %d: %d:",i+1,j+1);
			scanf("%f",&mat2[i][j]);
		}
	}
	
	printf("\n Entered Matrix First is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%.1f  ",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Entered Matrix Two is:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%.1f  ",mat2[i][j]);
		}
		printf("\n");
	}

	int choice;
	printf("\n What function you want to perform on these two matrix?\n");
	printf("1-ADDITION \n");
	printf("2-SUBTRACTION\n");
	printf("3-MULTIPLICATION\n");
	printf("4-END PROGRAM\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		if(row1==row2 and col1==col2)
		{
			printf("\n Addition of the two matrix is\n");
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col1;j++)
				{
					mat_res[i][j]=mat1[i][j]+mat2[i][j];
					printf("%.1f  ",mat_res[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("\n Addition is not possible");
		
		break;
	
	case 2:
		if(row1==row2 and col1==col2)
		{
			printf("\n Subtraction of the two matrix is \n");
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col1;j++)
				{
					mat_res[i][j]=mat1[i][j]-mat2[i][j];
					printf("%.1f  ",mat_res[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("\n Subtraction is not possible");
		
		break;
	
	case 3:
		if(col1==row2)
		{
			printf("\n Multiplication of the two matrix is \n");
			for(i=0;i<row1;i++)
			{
				for(j=0;j<col2;j++)
				{
					int k;
					mat_res[i][j]=0;
					for(k=0;k<row2;k++)
					{
						mat_res[i][j]+=((mat1[i][k])*(mat2[k][j]));
					}
					printf("%.1f  ",mat_res[i][j]);
				}
				printf("\n");
			}
		}
		else
		printf("\n Multiplication is not possible");
		
		break;
	
	case 4:
		printf("\nEND\n");
		break;
	
	default:
	printf("\nINVALID CHOICE\n");
	}
	
	return 0;
}
