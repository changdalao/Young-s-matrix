#include<stdio.h>
#define ROW 4
#define COL 4
int Inquire(int arr[ROW][COL],int input)
{
	int i = 0;
	int j = COL - 1;
	while (1)
	{
		if (input == arr[i][j])
			return 1;
		else if (input > arr[i][j] && i <= ROW)
			arr[i][j] = arr[++i][j];
		else if (input < arr[i][j] && j >= 0)
			arr[i][j] = arr[i][--j];
		else
			return 0;
	}
}
int main()
{
	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15, 17, 19, 20, 25 };
	int i = 0;
	int j = 0;
	int input = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("please enter the number>");
	scanf("%d", &input);
	if (Inquire(arr, input))
	{
		printf("%d在该数组中\n", input);
	}
	else
	{
		printf("%d不在该数组中\n", input);
	}
	return 0;
}


