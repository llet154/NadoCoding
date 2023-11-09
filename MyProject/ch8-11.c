#include <stdio.h>

//int main()
//{
//	int array[4][4] = {
//		{78,48,78,98},
//		{99,92,83,29},
//		{29,64,83,89},
//		{34,78,92,56}
//	};
//	int sum = 0;
//
//	printf("다음표의 세로와 가로합, 그리고 모든합을 구합니다.\n\n");
//	printf("-------------------------------\n");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("l");
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%4d l", array[i][j]);
//			sum += array[i][j];
//		}
//		printf("\n");
//	}
//	printf("-------------------------------\n");
//	printf("위 표의 세로와 가로합, 그리고 모든합을\n각각 행과 열의 마지막에 구합니다.\n\n");
//	int array2[5][5] = {
//		{78,48,78,98},
//		{99,92,83,29},
//		{29,64,83,89},
//		{34,78,92,56}
//	};
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			array2[i][4] += array2[i][j];
//			if (j == 0)
//			{
//				array2[4][0] += array2[i][0];
//			}
//			else if (j == 1)
//			{
//				array2[4][1] += array2[i][1];
//			}
//			else if (j == 2)
//			{
//				array2[4][2] += array2[i][2];
//			}
//			else if (j == 3)
//			{
//				array2[4][3] += array2[i][3];
//			}
//		}
//	}
//	array2[4][4] = sum;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("l");
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%4d l", array2[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}