#include <stdio.h>

//int main()
//{
//	int array[5][4] = {
//		{97,90,88,95},
//		{76,89,75,83},
//		{60,70,88,82},
//		{83,89,92,85},
//		{75,73,72,78}
//	};
//
//	printf("이름   중간1  중간2  기말1  기말2\n");
//	printf("========================================\n");
//	for (int i = 0; i < 5; i++)
//	{
//		int sum = 0;
//		double avg = 0;
//		if (i == 0)
//		{
//			printf("이현수  ");
//		}
//		if (i == 1)
//		{
//			printf("김기수  ");
//		}
//		if (i == 2)
//		{
//			printf("김범용  ");
//		}
//		if (i == 3)
//		{
//			printf("장기태  ");
//		}
//		if (i == 4)
//		{
//			printf("이명수  ");
//		}
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", array[i][j]);
//			sum += array[i][j];
//			avg = (double)sum / (sizeof(array[5]) / sizeof(array[5][4]));
//		}
//		printf("%d %.2lf\n", sum, avg);
//	}
//
//	return 0;
//}