#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int duplicate(int lotto[], int cnt);
//
//int main()
//{
//	srand(time(NULL));
//	int lotto[6] = { 0 };
//	for (int i = 0; i < 6; i++)
//	{
//		lotto[i] = rand() % 45 + 1;
//	}
//	int cnt = sizeof(lotto) / sizeof(lotto[0]);
//	if (duplicate(lotto, cnt) == 1)
//	{
//		printf("�ζ� ��÷ ��ȣ: ");
//		for (int i = 0; i < cnt; i++)
//		{
//			printf("%d ", lotto[i]);
//		}
//	}
//	else
//	{
//		printf("�ζ� ��÷ ��ȣ: ");
//		for (int i = 0; i < cnt; i++)
//		{
//			printf("%d ", lotto[i]);
//		}
//		printf("\n�ߺ��� �����մϴ�.\n");
//	}
//
//	return 0;
//}
//
//int duplicate(int lotto[], int cnt)
//{
//	for (int i = 0; i < cnt; i++)
//	{
//		for (int j = 1; j < cnt - i; j++)
//		{
//			if (lotto[i] == lotto[i + j])
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}