\\ sparse matrix 
1
14
145
1475
47859
programing in c 
#include<stdio.h>
int main()
{
	int i,j,arr[5][5];
	for(i=0;i<5;i++)
	{ printf("\n");
		for(j=0;j<5;j++)
		{
			if(j<=i)
			{
				printf("\n  arr[%d][%d]=",i,j);
				scanf("%d",&arr[i][j]);	
			}
		}
	//	printf("*");
	}
		for(i=0;i<5;i++)
	{ printf("\n");
		for(j=0;j<5;j++)
		{
			if(j<=i)
			{
			printf("%d",arr[i][j]);	//scanf("%d",arr[i][j]);	
			}
		}
	//	printf("*");
	}
}