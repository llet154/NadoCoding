#include <stdio.h>

//int S(int i);
//
//int main()
//{
//	printf("6의 0승부터 10승까지 구하는 프로그램입니다.\n");
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("6의 %d승: %d\n", i, S(i));
//	}
//
//	return 0;
//}
//
//int S(int i)
//{
//	if (i <= 0)
//	{
//		return 1;
//	}
//	else
//		return 6*S(i-1);
//}

//int Make_pow(int countN); //x의 y승 계산
//
//int main() {
//	int count = 10; //10승까지 만들기
//
//	for (int i = 0; i < count + 1; i++) {
//		printf("6의 %d승은 = %d\n", i, Make_pow(i));
//	}
//}
//
//
////x의 y승 계산
//int Make_pow(int countN) {
//	if (countN == 0) 
//		return 1;
//	else
//		return 6 * Make_pow(countN - 1);
//
//}