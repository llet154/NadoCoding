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
//		printf("모두 찬 스택입니다.\n");
//	}
//	else
//	{
//		stack[++top] = a;
//		printf("스택 첨자 %d에 %d 저장합니다.\n", top, a);
//	}
//
//}
//
//int pop()
//{
//	if (top != -1)
//	{
//		printf("스택 첨자 %d에서 %d를 제거합니다.\n", top, stack[top]);
//		top--;
//	}
//	else
//	{
//		printf("비어있는 스택입니다.\n");
//	}
//}