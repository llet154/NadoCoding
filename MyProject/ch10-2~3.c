#include <stdio.h>
#define MAXSIZE 3
//int stack[MAXSIZE];
//int top = -1;
//
//int isfull();
//void push(int a);
//int pop();
//
//int main()
//{
//	push(3);
//	push(5);
//	pop();
//	push(9);
//	push(1);
//	push(7);
//
//	return 0;
//}
//
//int isfull()
//{
//	return (top == MAXSIZE - 1);
//}
//
//void push(int a)
//{
//	if (isfull())
//	{
//		printf("��� �� �����Դϴ�.\n");
//	}
//	else
//	{
//		stack[++top] = a;
//		printf("���� ÷�� %d�� %d �����մϴ�.\n", top, a);
//	}
//
//}
//
//int pop()
//{
//	if (top != -1)
//	{
//		printf("���� ÷�� %d���� %d�� �����մϴ�.\n", top, stack[top]);
//		top--;
//	}
//	else
//	{
//		printf("����ִ� �����Դϴ�.\n");
//	}
//}