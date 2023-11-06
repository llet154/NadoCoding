#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main()
//{
//	srand(time(NULL));
//	int input;
//	int computer = rand() % 3;
//	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
//	scanf_s("%d", &input);
//	if (input == 0)
//	{
//		if (computer == 0)
//		{
//			printf("당신은 가위이고, 시스템은 가위입니다.\n");
//
//			printf("무승부입니다.\n");
//		}
//		else if (computer == 1)
//		{
//			printf("당신은 가위이고, 시스템은 바위입니다.\n");
//
//			printf("컴퓨터의 승리입니다.\n");
//		}
//		else
//		{
//			printf("당신은 가위이고, 시스템은 보입니다.\n");
//
//			printf("당신의 승리입니다.\n");
//		}
//	}
//	else if (input == 1)
//	{
//		if (computer == 0)
//		{
//			printf("당신은 바위이고, 시스템은 가위입니다.\n");
//
//			printf("당신의 승리입니다.\n");
//		}
//		else if (computer == 1)
//		{
//			printf("당신은 바위이고, 시스템은 바위입니다.\n");
//
//			printf("무승부입니다.\n");
//		}
//		else
//		{
//			printf("당신은 바위이고, 시스템은 보입니다.\n");
//
//			printf("컴퓨터의 승리입니다.\n");
//		}
//	}
//	else
//	{
//		if (computer == 0)
//		{
//			printf("당신은 보이고, 시스템은 가위입니다.\n");
//
//			printf("컴퓨터의 승리입니다.\n");
//		}
//		else if (computer == 1)
//		{
//			printf("당신은 보이고, 시스템은 바위입니다.\n");
//
//			printf("당신의 승리입니다.\n");
//		}
//		else
//		{
//			printf("당신은 보이고, 시스템은 보입니다.\n");
//
//			printf("무승부입니다.\n");
//		}
//	}
//
//	return 0;
//}