#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void nansu(int input);
//
//int main() {
//	int input=0;
//	printf("1���� 100 ���̿��� ������ �����Ǿ����ϴ�.\n");
//	printf("��ȸ�� �ִ� 7���Դϴ�.\n");
//	nansu(input);
//
//	return 0;
//}
//
//void nansu(int input)
//{
//	int count = 7;
//	printf("�� ������ �����ϱ��? �Է��غ�����. : ");
//	scanf_s("%d", &input);
//	srand(time(NULL));
//	int answer = rand() % 100 + 1;
//
//	for (int i = 0; i < 7; i++)
//	{
//		if (input == answer)
//		{
//			printf("�����Դϴ�.\n");
//			break;
//		}
//		else if (input > answer)
//		{
//			count--;
//			if (count == 0)
//			{
//				printf("��� ��ȸ�� �� ���̽��ϴ�.\n");
//				break;
//			}
//			printf("���� ��ȸ�� %d�� �Դϴ�.\n", count);
//			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
//			scanf_s("%d", &input);
//		}
//		else if (input < answer)
//		{
//			count--;
//			if (count == 0)
//			{
//				printf("��� ��ȸ�� �� ���̽��ϴ�.\n");
//				break;
//			}
//			printf("���� ��ȸ�� %d�� �Դϴ�.\n", count);
//			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
//			scanf_s("%d", &input);
//		}
//
//	}
//}