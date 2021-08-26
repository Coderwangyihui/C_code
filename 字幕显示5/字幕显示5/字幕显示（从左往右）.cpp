#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i, j;
	char name[] = "wangyihui";
	int name_len = strlen(name);
	for (i = 0;i < name_len;i++)
	{
		putchar(name[i]);
		Sleep(500);
	}
	printf(" ");
	while (1)
	{
		for (i = 1;i <= name_len;i++)
		{
			printf("\r");
			for (j = 0;j < i - 1;j++)
				putchar(name[name_len - i + j + 1]);
			printf(" ");
			for (j = 0;j < name_len - i + 1;j++)
				putchar(name[j]);
			Sleep(500);
		}
		Sleep(500);
	}
	return 0;
}
//´ÓÓÒÍù×ó£º
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	int i, j;
//	char name[] = "wangyihui";
//	int name_len = strlen(name);
//	for (i = 0;i < name_len;i++)
//		printf(" ");
//	for (i = 1;i <= name_len;i++)
//	{
//		printf("\b");
//		for (j = 0;j < i;j++)
//			putchar(name[j]);
//		for (j = 0;j < i;j++)
//			printf("\b");
//		Sleep(500);
//	}
//	while (1)
//	{
//		for (i = 1;i <= name_len;i++)
//		{
//			printf("\r");
//			for (j = 0;j < name_len - i;j++)
//				putchar(name[j + i]);
//			printf(" ");
//			for (j = 0;j < i - 1;j++)
//				putchar(name[j]);
//			Sleep(500);
//		}
//	}
//	return 0;
//}