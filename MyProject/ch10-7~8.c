#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int setNumber();
//void printHead();
//int printHigher();
//int printLower();
//int printAnswer();
//
//int number,min=0,max=100,input,count=1;
//
//int main()
//{
//	srand(time(NULL));
//	setNumber();
//	printHead();
//	while (1)
//	{
//		printHigher();
//		printLower();
//		printAnswer();
//	}
//
//	return 0;
//}
//
//int setNumber()
//{
//	number = rand() % 100 + 1;
//}
//
//void printHead()
//{
//	printf("1 에서 100까지의 하나의 정수가 결정되었습니다.\n");
//	printf("이 정수를 맞추어 보세요? > ");
//	scanf_s("%d", &input);
//}
//
//int printHigher()
//{
//	if (input < number)
//	{
//		if (count == 5)
//		{
//			printf("맞추어야 할 정수가 입력한 정수%d보다 큽니다. (시도횟수: %d번)\n", input, count++);
//			printf("최대 시도 횟수인 5회 동안 맞추지 못하였습니다. 종료됩니다.\n");
//			exit(0);
//		}
//		else
//		{
//			min = input;
//			printf("맞추어야 할 정수가 입력한 정수%d보다 큽니다. (시도횟수: %d번)\n", input,count++);
//			printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min + 1, max);
//			scanf_s("%d", &input);
//		}
//	}
//}
//
//int printLower()
//{
//	if (input > number)
//	{
//		if (count == 5)
//		{
//			printf("맞추어야 할 정수가 입력한 정수%d보다 작습니다. (시도횟수: %d번)\n", input, count++);
//			printf("최대 시도 횟수인 5회 동안 맞추지 못하였습니다. 종료됩니다.\n");
//			exit(0);
//		}
//		else
//		{
//			max = input;
//			printf("맞추어야 할 정수가 입력한 정수%d보다 작습니다. (시도횟수: %d번)\n", input,count++);
//			printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min + 1, max - 1);
//			scanf_s("%d", &input);
//		}
//	}
//}
//
//int printAnswer()
//{
//	if (input == number)
//	{
//		printf("축하합니다! 정답은 %d입니다.\n", input);
//		exit(0);
//	}
//}