//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* line);
//int main()
//{
//	char line[100];
//	/*char* d = " ";*/
//	char* r;
//	printf("������ ������ �Է��ϼ��� >> ");
//	fgets(line,100,stdin);
//	printf("�Է��� ������ �ܾ �ݴ�� ����մϴ� >> ");
// 	/*r = strtok(line, d);*/
//	r = strtok(line, " ");
//	while (r != NULL) {
//		reverse(r);
//		printf(" ");
//		/*r = strtok(NULL, d);*/
//		r = strtok(NULL, " ");
//	}
//
//	return 0;
//}
//
//void reverse(char* line)
//{
//	char ch = *line;
//	if (ch)
//	{
//		reverse(++line);
//		printf("%c", ch);
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char line[100];
//	char* r;
//	printf("������ ������ �Է��ϼ��� >> ");
//	fgets(line, 100, stdin);
//	printf("�Է��� ������ �ܾ �ݴ�� ����մϴ� >> ");
//	r = strtok(line, " ");
//	while (r != 0)
//	{
//		for (int i = strlen(r) - 1; i >= 0; i--)
//		{
//			printf("%c", r[i]);
//		}
//		printf(" ");
//		r = strtok(0, " ");
//	}
//
//
//	return 0;
//}