#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void nansu(int input);
//
//int main() {
//	int input=0;
//	printf("1에서 100 사이에서 난수가 결정되었습니다.\n");
//	printf("기회는 최대 7번입니다.\n");
//	nansu(input);
//
//	return 0;
//}
//
//void nansu(int input)
//{
//	int count = 7;
//	printf("이 정수는 무엇일까요? 입력해보세요. : ");
//	scanf_s("%d", &input);
//	srand(time(NULL));
//	int answer = rand() % 100 + 1;
//
//	for (int i = 0; i < 7; i++)
//	{
//		if (input == answer)
//		{
//			printf("정답입니다.\n");
//			break;
//		}
//		else if (input > answer)
//		{
//			count--;
//			if (count == 0)
//			{
//				printf("모든 기회를 다 쓰셨습니다.\n");
//				break;
//			}
//			printf("남은 기회는 %d번 입니다.\n", count);
//			printf("입력한 수보다 작습니다. 다시 입력하세요. : ");
//			scanf_s("%d", &input);
//		}
//		else if (input < answer)
//		{
//			count--;
//			if (count == 0)
//			{
//				printf("모든 기회를 다 쓰셨습니다.\n");
//				break;
//			}
//			printf("남은 기회는 %d번 입니다.\n", count);
//			printf("입력한 수보다 큽니다. 다시 입력하세요. : ");
//			scanf_s("%d", &input);
//		}
//
//	}
//}