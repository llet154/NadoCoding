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
//	printf("1 ���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");
//	printf("�� ������ ���߾� ������? > ");
//	scanf_s("%d", &input);
//}
//
//int printHigher()
//{
//	if (input < number)
//	{
//		if (count == 5)
//		{
//			printf("���߾�� �� ������ �Է��� ����%d���� Ů�ϴ�. (�õ�Ƚ��: %d��)\n", input, count++);
//			printf("�ִ� �õ� Ƚ���� 5ȸ ���� ������ ���Ͽ����ϴ�. ����˴ϴ�.\n");
//			exit(0);
//		}
//		else
//		{
//			min = input;
//			printf("���߾�� �� ������ �Է��� ����%d���� Ů�ϴ�. (�õ�Ƚ��: %d��)\n", input,count++);
//			printf("%d���� %d������ ������ �ٽ� �Է��ϼ���. > ", min + 1, max);
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
//			printf("���߾�� �� ������ �Է��� ����%d���� �۽��ϴ�. (�õ�Ƚ��: %d��)\n", input, count++);
//			printf("�ִ� �õ� Ƚ���� 5ȸ ���� ������ ���Ͽ����ϴ�. ����˴ϴ�.\n");
//			exit(0);
//		}
//		else
//		{
//			max = input;
//			printf("���߾�� �� ������ �Է��� ����%d���� �۽��ϴ�. (�õ�Ƚ��: %d��)\n", input,count++);
//			printf("%d���� %d������ ������ �ٽ� �Է��ϼ���. > ", min + 1, max - 1);
//			scanf_s("%d", &input);
//		}
//	}
//}
//
//int printAnswer()
//{
//	if (input == number)
//	{
//		printf("�����մϴ�! ������ %d�Դϴ�.\n", input);
//		exit(0);
//	}
//}